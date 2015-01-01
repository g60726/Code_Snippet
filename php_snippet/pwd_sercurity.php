<?php
//This file includes the basic step to do password hassing related sercurity

//Step 1 Hashed password and store them in db

$userEnterPwd = "KenLiao";

//using md5 to hash
$md5Hashed = md5($userEnterPwd);

//using PHP default Hashing
$defaulHash = password_hash($userEnterPwd,PASSWORD_DEFAULT);
echo $defaulHash."<br>";

//Using MCRYPT (Using the a really powerful algorithm)
$mcHash = password_hash($userEnterPwd,PASSWORD_MCRYPT);
echo $mcHash."<br>";


//verify password

$userAttemptPwd = "KenLiao";
//password_verify(usr_enter pwd, hashed pwd)
if(password_verify($userAttemptPwd,$mcHash)){
	echo "Correct Password<br>";  //this should trigger
}
else{
	echo "Incorrect Password<br>";
}

$userAttemptPwd2 = "WrongPwd";

if(password_verify($userAttemptPwd2, $mcHash)){
	echo "Correct Password<br>";
}
else{
	echo "Wrong Password"; //this should trigger
}
?>