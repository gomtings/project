<?php
// 일반 페이지에서 넘어왔을 시  차단
//     if(!isset($_POST['ACCESS'])){
//                 echo json_encode(array('ACCESS'=>'denied'));
//                             exit;
//                                 }

//                                     // 아이디 또는 비밀번호를 입력하지 않았을 시 
// 데이터베이스값을 대체하는 변수  
$get_id = 'user'; // 임의로 정의된 아이디 
$get_pw = sha1('1234'); // 임의로 정의된 비밀번호 

$user_id = $_POST['user_id'];
$user_pw = $_POST['user_pw'];
$is_ajax = $_POST['is_ajax'];

if (empty($user_id) || $user_pw) { // 공백 일 경우...
    echo json_encode(array('result' => 'fail1', 'msg' => '아이디 또는 비밀번호를 입력해주세요', 'id' => $_POST['id']));
    exit;
}

// 아이디 불일 치시 
if ($get_id != $user_id) {
    echo json_encode(array('result' => 'fail2', 'msg' => '아이디가 일치하지 않습니다.', 'id' => $_POST['id']));
    exit;
}

// 비밀번호 불일치 시 
if ($get_pw != sha1($user_pw)) {
    echo json_encode(array('result' => 'fail3', 'msg' => '비밀번호 일치하지 않습니다.', 'id' => $_POST['id']));
    exit;
}
// 로그인이 성공했을 시 
echo json_encode(array('result' => 'success', 'msg' => '로그인에 성공하였습니다.', 'id' => $_POST['id']));
exit;

?>