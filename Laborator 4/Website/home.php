<!DOCTYPE html>

<html lang = "en">
	<head>
		<title>Home</title>
		<link rel = "stylesheet" href = "css/style.css" type = "text/css" />
		<script type="text/javascript" src="script/script.js"></script>
	</head>
	
	<body class = "home" onload = quoteFunction();>
		<header class = "title"><b>Welcome to my webpage !</b></header>
		<header class = "subtitle"><b>Creating useless websites since 2016...</b></header>
		
		<nav class = "panel"><a href = "home.php"><b>Home</b></a></nav>
		<nav class = "panel"><a href = "about.php"><b>About</b></a></nav>
		<nav class = "panel"><a href = "gallery.php"><b>Gallery</b></a></nav>
		
		<dl id = "quote" onclick = quoteFunction();>
			<dt id = "qText"></dt>
			<dd id = "qAuthor"></dd>
		</dl>
	</body>
</html>