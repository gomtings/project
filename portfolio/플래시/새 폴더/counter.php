<html>
<head>
</head>
<title>ī��Ʈ �������Դϴ�.</title>
<body>
<pre>
�ݰ����ϴ�. 
�湮�Ҷ����� 1�� ī��Ʈ �˴ϴ�.
</pre>
</body>
<? 
       $connect = mysql_connect("localhost", "root", "apmsetup");
       if (!$connect)
           die("DB ���� ���� : " . mysql_error());
       mysql_select_db("test", $connect);
   
       mysql_query("update counter set count=count+1", $connect); 
       $result = mysql_query("select count from counter", $connect); 
       
       echo " �湮Ƚ�� : " . mysql_result($result, 0, 0);
   
       mysql_close($connect); 
?>
</html>
