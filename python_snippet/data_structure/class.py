class ParkingLot:
	classVariable = 0 
	vacancy = 0
	__private = 5  #private attribute
	#constructor 
	def __init__(self,vacancy):
		self.vacancy = vacancy
		ParkingLot.classVariable += 1
	
	def getVacancy(self):
		return self.vacancy
		
	def print_ClassVariable(self):
		return ParkingLot.classVariable

	def __del__(self):
		return

p1 = ParkingLot(50)
print p1.getVacancy()
print p1.print_ClassVariable()

p2 = ParkingLot(40)
print p1.print_ClassVariable()

#Inheritance
class Foo(ParkingLot):
  def __init__(self):
		self.vacancy = 0

f1 = Foo()
print f1.getVacancy()
  


