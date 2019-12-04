<html>
<head>
</head>
<title>카운트 페이지입니다.</title>
<body>
<pre>
반갑습니다. 
방문할때마다 1씩 카운트 됩니다.
</pre>
</body>
<? 
       $connect = mysql_connect("localhost", "root", "apmsetup");
       if (!$connect)
           die("DB 접속 실패 : " . mysql_error());
       mysql_select_db("test", $connect);
   
       mysql_query("update counter set count=count+1", $connect); 
       $result = mysql_query("select count from counter", $connect); 
       
       echo " 방문횟수 : " . mysql_result($result, 0, 0);
   
       mysql_close($connect); 
?>
</html>
