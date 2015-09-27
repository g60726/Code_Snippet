console.log("Hi");

//Array
arr = [1,2,3,4,5]

//for loop
for(var i = 0;i < arr.length;i++ )
{
	console.log(arr[i]);
}

//while loop
var c = 0
while(c < arr.length){
	console.log(arr[c]);
	c++;
}


//comparison
var a = 3
var b = 5

if(a > 5 && b == 5){
	console.log("A is" + a);
}
else{
	console.log("B is" + b);
}

//Miscellaneous Operator
console.log(((a < b) ? a : b));

//typeof 
console.log(typeof(arr));
console.log(typeof(a));
console.log(typeof(a + ""));

//switch
var k = "2";
switch(k){
	case "1" :
		console.log("1");
		break;
	case "3" :
		console.log("3");
		break;
	default :
		console.log("Default");
		break
}

//function 
function foo(x,y){
	return x + y;
}

console.log(foo(2,3));

foo2 = function(x, y){
	return x % y;
}

console.log(foo2(2,3));

foo3 = function(x, callable){
	var y = callable(x,x);
	return y;
}

console.log(foo3(6,foo));
console.log(y);





