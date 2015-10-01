# Enter your code here. Read input from STDIN. Print output to STDOUT
t1 = False
input_str = raw_input()
new_str = ""
str_leng = len(input_str)
counter = str_leng - 1
while (counter >= 0):
    new_str += input_str[counter]
    counter -= 1 

if(new_str == input_str):
  	t1 = True  
else:
    t1 = False

#test 2
t2 = True
#even
if(str_leng % 2 == 0):
	new_dic = {}
	for i in input_str:
		if(new_dic.has_key(i) == True):
			new_dic[i] = new_dic[i] + 1
		else:
			new_dic[i] = 1
	for k in new_dic.keys():
		# if there is an ood number
		if(new_dic[k] % 2 == 1):
			t2 = False
else:
	#odd 
	odd_occurance = 0
	new_dic = {}
	for i in input_str:
		if(new_dic.has_key(i) == True):
			new_dic[i] = new_dic[i] + 1
		else:
			new_dic[i] = 1
	for k in new_dic.keys():
		# if there is an ood number
		if(new_dic[k] % 2 == 1):
			odd_occurance += 1
	if(odd_occurance > 1):
		t2 = False

if(t1 or t2):
	print "true"
else:
	print "false"






