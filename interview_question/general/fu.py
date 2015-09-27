def encode(input_s):
	if(len(input_s) == 0):
		return
	counter = 0
	occurance = 0
	result = ""
	while(counter < len(input_s)):
		if(input_s[counter] == current_char):
			occurance += 1
		else:
			result = result + current_char + str(occurance)
			current_char = input_s[counter]
			occurance = 1
		counter += 1
	return result + current_char + str(occurance)
