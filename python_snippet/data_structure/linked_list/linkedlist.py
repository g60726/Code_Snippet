import copy
class LinkedList:
	#constructor
	def __init__(self, head = None):
		self.head = head
	
	def push(self, new_node):
		traverse = self.head 
		while(traverse.next_node != None):
			traverse = traverse.next_node
		traverse.next_node = new_node
	
	def pop(self):
		traverse = self.head
		while(traverse.next_node.next_node != None):
			traverse = traverse.next_node
		result = traverse.next_node
		traverse.next_node = None
		return result

	def print_list(self):
		traverse = self.head
		while(traverse != None):
			print traverse.data
			traverse = traverse.next_node


