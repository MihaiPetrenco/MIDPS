<?php
	require_once('/includes/connection.php');
	
	$query = "SELECT * FROM users";
	$response = @mysqli_query($dbc, $query);
	
	if($response){
		
		while($row = mysqli_fetch_array($response)){

		}
	} else {
		echo "Couldn't issue database query";
		echo mysqli_error($dbc);
	}
mysqli_close($dbc);
?>
