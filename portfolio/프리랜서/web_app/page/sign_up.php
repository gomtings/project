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
         $user_name = $_POST['user_name'];  
         $user_id = $_POST['user_id'];
         $user_pw = $_POST['user_pw'];
         $user_Add = $_POST['user_Add'];
         $user_num = $_POST['user_num'];
         $id_chk = false;
         $pw_chk = false;
        /* DB SELECT*/
        //$sql = "SELECT * FROM login_info";
        $sql = "SELECT * FROM login_info";
        //$sql = "SELECT * FROM login_info WHERE NAME = $user_name";
        $result = mysqli_query($conn, $sql);
        mysqli_query($conn,"set names utf8");
        $row = mysqli_fetch_array($result);
        //echo json_encode(array("name" => $row['name'], "id" => $row['id'],"password" => $row['password'],"address" => $row['address'],"phone_number" => $row['phone_number']));
        while($row = mysqli_fetch_array($result)){
            if (strcmp($row['id'], $user_id) == 0) {
                $id_chk = true;
            }else{
                $id_chk = false;
            }
            
            // 비밀번호 확인.... 
            if (strcmp($row['password'], $user_pw) == 0) {
                $pw_chk = true;
            }else{
                $pw_chk = false;
            }
        }
        /* INSERT 예제 */
        if ($id_chk==false && $pw_chk ==  false) {
            $sql = "INSERT INTO login_info (name, id, password, address, phone_number)VALUES ('$user_name', '$user_id', '$user_pw', '$user_Add', '$user_num')";
            if ($conn->query($sql) === TRUE){ 
                $msg =  json_encode(array("result" => 'success', "msg" => '회원가입에 성공했습니다.', "id_chk" => $id_chk, "pw_chk" => $user_Add));
            }else{
                $msg =  json_encode(array("result" => 'fail', "msg" => '오류가 발생했습니다.', "Error" => $sql, "Error2" =>  $conn->error));
            }
        }
        if ($id_chk==true && $pw_chk ==  true) {
            $msg =  json_encode(array("result" => 'idpw_fail', "msg" => '중복된 아이디,비밀번호 입니다.', "id_chk" => $user_id));
        }
        // 아이디 불일 치시
        if ($id_chk == true && $pw_chk == false) {
            $msg =  json_encode(array("result" => 'id_fail', "msg" => '존재 하는 아이디 입니다.', "id_chk" => $user_id));
        }
        // 비밀번호 불일치 시
        if ($id_chk == false && $pw_chk ==  true) {
            $msg =  json_encode(array("result" => 'pw_fail', "msg" => '존재 하는 비밀번호 입니다.', "pw_chk" => $user_pw));
        }
        echo $msg;
        mysqli_close($conn);
        exit;
         
    }else{ // 연결 실패 
    }
?>