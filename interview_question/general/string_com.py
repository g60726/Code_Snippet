#generate all possible strings from lowercase

#use binary number 
intput_str = "abcde"
str_len = len(intput_str)
print str_len
# the number of combination is 2 ^ n - 1
temp_list = []
counter = 0
while(counter < (2 ** str_len)):
	code = bin(counter)
	code = str(code)
	code = code[2:]
	num_zero = str_len - len(code)
	zero_part = ""
	for i in range(num_zero):
		zero_part += "0"
	code = zero_part + code 	
	temp_list.append(code)
	counter += 1

for i in temp_list:
	result = ""
	counter = 0
	for character in i:
		if(character == "0"):
			result += intput_str[counter].lower()
		else:
			result += intput_str[counter].upper()
		counter+=1
	print result 

