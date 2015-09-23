input_stream = ['a','bb','a','c']

def solution(input_stream):
	freq = {}
	for word in input_stream:
		if(freq.has_key(word)):
			freq[word] += 1
		else:
			freq.update({word : 1})
	print freq.items()

solution(input_stream)
