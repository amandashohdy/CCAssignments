class Math :
  def __init__(self, name, value) :
    print("Creating Math object called " + name + " with value: " + str(value))
    print()
    self.name = name
    self.value = value

  def add(self, addValue) :
    print("Adding " + str(addValue) + " to " + str(self.value))
    self.value = self.value + addValue
    self.print()

  def subtract(self, addValue) :
    print("Subtracting " + str(addValue) + " from " + str(self.value))
    self.value = self.value - addValue
    self.print()

  def multiply(self, addValue) :
    print("Multiplying " + str(addValue) + " to " + str(self.value))
    self.value = self.value * addValue
    self.print()

  def divide(self, addValue) :
    print("Dividing " + str(addValue) + " from " + str(self.value))
    self.value = self.value / addValue
    self.print()

  def print(self) :
    print("This variable's value is " + str(self.value) + ".")

  def printName(self) :
    print("This variable's name is " + self.name + ".")
    self.print()


if __name__ == "__main__" :
  name = input("Name your Math object: ")
  value = int(input("What is your starting value: "))
  userValue = Math(name, value)
  option = "y"
  userChoice = "5"
  while True :
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    print("5. Print Value")
    print("6. Print Name")
    print("7. Create a new Math object")
    print()
    userChoice = input("Select a menu option: ")
    if (userChoice == "1") :
      value = int(input(str(userValue.value) + " + "))
      userValue.add(value)
    elif (userChoice == "2") :
      value = int(input(str(userValue.value) + " - "))
      userValue.subtract(value)
    elif (userChoice == "3") :
      value = int(input(str(userValue.value) + " * "))
      userValue.multiply(value)
    elif (userChoice == "4") :
      value = int(input(str(userValue.value) + " / "))
      userValue.divide(value) 
    elif (userChoice == "5") :
      userValue.print()
    elif (userChoice == "6") :
      userValue.printName()
    elif (userChoice == "7") :
      name = input("Name your Math object: ")
      value = int(input("What is your starting value: "))
      userValue = Math(name, value)
    else :
      print("Invalid menu option")
    print()
  
  
