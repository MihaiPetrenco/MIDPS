<?php

define ('HOST', 'localhost');
define ('USER', 'root');
define ('PASS', '');
define('DB', 'website_database');

session_start();
$CONNECT = mysqli_connect(HOST, USER, PASS, DB);

//if($CONNECT) echo 'OK';
//else echo 'ERROR';

if ($_SERVER['REQUEST_URI'] == '/') {
	$Page = 'registration';
	$Module = 'registration';
} else {
	$URL_Path = parse_url($_SERVER['REQUEST_URI'], PHP_URL_PATH);
	$URL_Parts = explode('/', trim($URL_Path, ' /'));
	$Page = array_shift($URL_Parts);
	$Module = array_shift($URL_Parts);

	if (!empty($Module)) {
		$Param = array();
		for ($i = 0; $i < count($URL_Parts); $i++) {
			$Param[$URL_Parts[$i]] = $URL_Parts[++$i];
		}
	}
}
	if(isset($_POST['submit'])){
		if ($_POST['submit']) {
			echo 'Запрос...';
			exit;
		}
	}
?>

<html>
	<head>
		<title>Registration</title>
		<meta charset = "UTF-8" />
	</head>
	<body>
		<form method = "POST" action = "registration">
			<input type = "text" name = "login" required> - Username<br /> <br />
			<input type = "password" name = "password" required> - Password<br /><br />
			<input type = "email" name = "email" required> - Email <br /><br />
			<input type = "submit" name = "submit" value = "Register">
		</form>
	</body>
</html>