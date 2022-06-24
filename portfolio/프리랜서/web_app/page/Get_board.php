<?php
    /* DB 연결 정보*/
    date_default_timezone_set('Asia/Seoul');
    $host = "localhost"; //139.150.80.81
    $user = "tkddn4508";//enviot
    $pw = "gom20726!";//env194^9*
    $dbName = "tkddn4508";//lock_iot
    $conn = mysqli_connect($host, $user, $pw, $dbName);
    /* DB 연결 확인 */
    if($conn){ // 연결 성공
        // 데이터베이스값을 대체하는 변수
         $board_a = $_POST['board_a'];  
         $board_b = $_POST['board_b'];
         $board_c = $_POST['board_c'];
         $board_d = $_POST['board_d'];
         $board_e = $_POST['board_e'];
         $board_f = $_POST['board_f'];
         $board_rw = $_POST['board_rw']; // 읽기/쓰기 모드 선택 
         $id_chk = false;
         $pw_chk = false;
        /* DB SELECT*/
        $sql = "SELECT * FROM board_info";
        $result = mysqli_query($conn, $sql);
        mysqli_query($conn,"set names utf8");
        $row = mysqli_fetch_array($result);
        if(strcmp($board_rw,'Read') == 0){
            while($row = mysqli_fetch_array($result)){
                $msg =  json_encode(array("board_a" => $row['board_a'], "board_b" => $row['board_b'],"board_c" => $row['board_c'],"board_d" => $row['board_d'],"board_e" => $row['board_e'],"board_f" => $row['board_f']));
                echo $msg;
            }
        }
        if(strcmp($board_rw,'Write') == 0){
            /* INSERT 예제 */
            if ($id_chk == false && $pw_chk ==  false) {
                $sql = "INSERT INTO board_info (board_a, board_b, board_c, board_d, board_e, board_f)VALUES ('$board_a', '$board_b', '$board_c', '$board_d', '$board_e', '$board_f')";
                if ($conn->query($sql) === TRUE){ 
                    $msg =  json_encode(array("result" => 'success', "msg" => '게시판 업데이트 성공'));
                }else{
                    $msg =  json_encode(array("result" => 'fail', "msg" => '게시판 업데이트 실패', "Error" => $sql, "Error2" =>  $conn->error));
                }
            }
            echo $msg;
        }
        mysqli_close($conn);
        exit;
    }else{ // 연결 실패 
    
    }
    /*
     테이블 명 수정은  board_info 를 수정 하면 됩니다.
     칼럼 명은 board_a ~  board_f 입니다. 
     board_rw 는 게시판의 읽기/쓰기 모드 선택 입니다. html 에서 넘겨주는 값 입니다.
     */
?>