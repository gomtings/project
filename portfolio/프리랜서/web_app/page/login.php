<?php
    /* DB 연결 정보*/
    $host = "localhost"; //139.150.80.81
    $user = "tkddn4508";//enviot
    $pw = "gom20726!";//env194^9*
    $dbName = "tkddn4508";//lock_iot
    $conn = mysqli_connect($host, $user, $pw, $dbName);
    $id_chk = false;
    $pw_chk = false;
    /* DB 연결 확인 */
    if($conn){ // 연결 성공
        // 데이터베이스값을 대체하는 변수  
         $user_id = $_POST['user_id'];
         $user_pw = $_POST['user_pw'];
         $is_ajax = $_POST['is_ajax'];
        //$period = $period / 1000;
        /* DB SELECT*/
        $sql = "SELECT * FROM login_info";
        $result = mysqli_query($conn, $sql);
        $row = mysqli_fetch_array($result);
        while($row = mysqli_fetch_array($result)){
            if ($row["id"] == $user_id) {
                $id_chk = true;
            }else{
                $id_chk = false;
            }
            // 비밀번호 확인.... 
            if ($row["password"] == $user_pw) {
                $pw_chk = true;
            }else{
                $pw_chk = false;
            }
            if($id_chk ==  true && $pw_chk ==  true){
                break;
            }
        }
        if (empty($user_id) || empty($user_pw)) { // 아이디 또는 비밀번호를 입력하지 않았을 시 (공백 상태...)
            $msg = json_encode(array("result" => 'fail', "msg" => '아이디 또는 비밀번호를 입력해주세요'));
        }

        // 아이디 불일 치시 
        if ($id_chk==false&&$pw_chk ==  true) {
            $msg = json_encode(array("result" => 'id_fail', "msg" => '아이디가 일치하지 않습니다.', "id_chk" => $id_chk));
        }

        // 비밀번호 불일치 시 
        if ($id_chk==true&&$pw_chk ==  false) {
            $msg = json_encode(array("result" => 'pw_fail', "msg" => '비밀번호 일치하지 않습니다.', "id_chk" => $id_chk, "pw_chk" => $pw_chk));
        }
        // 아이디 혹은 비밀번호 불일치 시 
        if ($id_chk==false && $pw_chk ==  false) {
            $msg = json_encode(array("result" => 'idpw_fail', "msg" => '아이디 혹은 비밀번호 가 일치하지 않습니다.', "id_chk" => $id_chk, "pw_chk" => $pw_chk));
        }
        // 로그인이 성공했을 시
        if ($id_chk==true && $pw_chk ==  true) {
            $msg = json_encode(array("result" => 'success', "msg" => '로그인에 성공하였습니다.', "id_chk" => $id_chk, "pw_chk" => $pw_chk));
        }
        echo $msg;
        mysqli_close($conn);
        exit;
    }else{ // 연결 실패 
    }
?>