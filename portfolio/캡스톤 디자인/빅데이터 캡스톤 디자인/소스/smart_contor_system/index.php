<?php
    $db1 = $_GET['oneso1'];
    $db2 = $_GET['oneso2'];
    $db3 = $_GET['oneso3'];
    $host = 'localhost';
    $user = 'tkddn4508';
    $pw = 'gom20726';
    $dbName = 'tkddn4508';
    $mysqli = new mysqli($host, $user, $pw, $dbName);
	$sqlt = "insert into GPS(oneso1,oneso2,oneso3) values ('$db1','$db2','$db3')";
	/*$sql_text = "INSERT INTO topic (
        title,
        description,
        created
    ) VALUES (
        'MySQL',
        'MySQL is ....',
        NOW()
    )");"*/
    if($mysqli){
        echo "MySQL ?? ??";
    }else{
        echo "MySQL ?? ??";
    }
$result = mysqli_query($mysqli, $sqlt);

var_dump($result);

?>