var k = k || "4" //The || will produce k if the first operand is truly, the second operand otherwise
console.log(k)

// Built-in array function
arr = new Array()
arr.push(1);
arr.push(2);//add an element to the end of the array
arr.push(3);
console.log(arr);
var a = arr.pop(); //remove and return the last element
console.log(a)
console.log(arr);
arr.shift(); //remove first element
console.log(arr);
arr.unshift('a'); //add element to the beginning of array
console.log(arr);
//for each
arr.forEach(function(item,index,array){
	console.log("item is " + item);
	console.log("index is " + index);
	console.log("array is " + array);
});
//indexOf
console.log(arr.indexOf(2)); //return 1
console.log(arr.indexOf("2")); //return -1 since it is trying to look for 2 of the string type

arr.push(10);
arr.push(11);
arr.push(12);
console.log(arr);
//splice
removed_item = arr.splice(0,1);
console.log(arr);
console.log(removed_item);
