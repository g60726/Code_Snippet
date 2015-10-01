String.prototype.repeat = function(i){
	var k = 0;
	while(k < i){
		console.log(this);
		k++;
	}
}

"Ken".repeat(2);
