input_str = "ssss"
sub_str = "ssss"

i = 0 #outer counter
occurance = 0

while (i < (len(input_str) - len(sub_str) + 1)):
	k = 0 # inner loop 
	if(input_str[i] == sub_str[0]):
		while(k < len(sub_str)):
			if(input_str[i + k] != sub_str[k]):
				break 
			else:
				if (k == len(sub_str) - 1):
					occurance += 1
			k += 1
	i+= 1

print occurance 
