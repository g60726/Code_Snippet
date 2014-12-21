<?php 
 //This is used to learn and test out PDO before implementing it in idebate

//This command display the available drivers for 
 var_dump(PDO::getAvailableDrivers());
 echo"<br>";

 //after testing the available driver is mysql

 //on the server, a test table is set up
 //testing connection 

// 1. Connection to a database 
 $hostname = 'localhost';
 $username = 'root';
 $password = 'ilpsmf6y';
 $dbname = 'pdo';

 //implement a try and catch block, a good coding standard
try{
	$db = new PDO("mysql:hostname=$hostname;dbname=$dbname",$username,$password);
	$db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION); // set the PDO to throw exception
	echo "The database is connected oh yeah <br>";
}

catch(PDOException $e){
	echo $e->getMessage(); 
	echo "Something went wrong<br>.";	
}

// 2. Run sql query. In this case it creates a table called user
// in this case $db->exec("query string") executes the query, in this case no need to prevent SQL injection since it creates table
try{
	//set up the query string
	$query = "CREATE TABLE users
	(	
	userid INT NOT NULL,
	age INT NOT NULL,
	name varchar(255)
	);";

	$count = $db->exec($query);
	echo $count;
	echo "Table had succssfully created<br>.";
}
catch(PDOException $e){
	echo $e->getMessage();
	echo "The table is not created<br>";
}


// 3. Inserting a row. In this case I would want to use prepare statement to increase sercurity. 
// row inserted is 1  18 Ken Liao

try{
	// create the template for prepare statement
	$insertRow = $db->prepare("INSERT INTO users (userid, age, name) VALUES (:userid, :age, :name)");
	// bind the parameters to each variable. This is called the named parameter. In contrast to mysqli which use ? to do prepated statement.
	$insertRow->bindParam(':userid', $userid);
	$insertRow->bindParam(':age', $age);
	$insertRow->bindParam(":name",$name);

	// with prepared statement you can insert multiple times
	$userid = 2;
	$age = 18;
	$name = "Stephen";

	$insertRow->execute();

	$userid = 4;
	$age = 20;
	$name = "LOL";

	$insertRow->execute();

	$userid = 6;
	$age = 10;
	$name = "kids";
	$insertRow->execute();

	echo "New record had been created successfully<br>";
}

catch(PDOException $e){
	echo $e->getMessage();
	echo "<br>";
} 


// 4. Selecting a row

try{	
	/*$select = $db->prepare("SELECT :col FROM users");
	$select->bindParam(":col", $col);
	$col = 'name'; */

	$query = "SELECT * FROM users";	
	foreach($db->query($query) as $row){
		// print_r ($row);
		// echo"<br>";
		echo $row['name'];
		echo "<br>";		
	}
	echo "<br>The select command run correct<br>.";
	
	//using prepare statement
	$pre = $db->prepare("SELECT * FROM users WHERE userid = :userid");
    $userid = 1;
	$pre->execute(array('userid'=>"$userid"));
	while($row = $pre->fetch()){
		echo $row['name'];
		echo "<br>";
	}
	echo "Select using prepare statement";
}

catch(PDOException $e){
	echo $e->getMessage();
	echo "Select failed";
}


//5. using transaction
try{
	$insert = $db->prepare("INSERT INTO users (userid,age,name) VALUES (:userid, :age, :name)");
	$insert->bindParam(":userid",$userid);
	$insert->bindParam(":age",$age);
	$insert->bindParam(":name",$name);

	//This start the transaction, turn auto commit off
	$db->beginTransaction();

	$userid = 7;
	$age = 13;
	$name = "lomis";
	$insert->execute();

	$db->commit();

	echo "The transaction had completed";

}
catch(PDOException $e){
	echo $e->getMessage();
	echo "<br>";
}
?>