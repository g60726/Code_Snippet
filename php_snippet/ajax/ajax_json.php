<?php 
//This is called by ajax.html and it returns a json object
$x = $_POST['x'];
$y = $_POST['y'];
$sum = $x + $y;
//echo $sum;
$arr = array("sum" => $sum);
$json = json_encode($arr);
echo $json;
?>