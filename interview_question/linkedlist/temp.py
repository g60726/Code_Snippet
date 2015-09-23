class node:
	def __init__(self, value = None, next_node = None):
		self.value = value
		self.next_node = next_node

n2 = node(2)
n1 = node(1,n2)

print n1.next_node.next_node.value


