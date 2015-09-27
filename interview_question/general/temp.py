input_s = "abcdef"

def print_p(index, length, string, seg):
	if(index == length):
		print seg
	else:
		segu = seg + string[index].upper()
		segl = seg + string[index].lower()
		index += 1
		print_p(index, length, string, segu)
		print_p(index, length, string, segl)

print_p(0,len(input_s),input_s,"")