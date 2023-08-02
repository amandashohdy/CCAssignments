class Dog :
  def __init__(self) :
    self.name = "?"
    self.breed = "?"    
    self.age = "?"
    self.size = "?"

  def happyBirthday(self) :
    print("Happy Birthday " + self.name + "!")
    self.age = str(int(self.age) + 1)

  def printDog(self) :
    print(self.name + " is a " +
          self.breed + ". " + self.name + " is " + self.age + " years old and is a(n) " + self.size + " sized dog.")
    print() 

    
if __name__ == "__main__" :
  simba = Dog()
  simba.printDog()

  simba.name = "Simba"
  input()   #demo
  simba.printDog()
  
  simba.breed = "german shepherd"
  input()   #demo
  simba.printDog()
  
  simba.age = "8"
  input()   #demo
  simba.printDog()

  simba.size = "x-large"
  input()    #demo
  simba.printDog()

  leo = Dog()
  input()   #demo
  leo.printDog()

  leo.name = "Leo"
  input()   #demo
  leo.printDog()
  
  leo.breed = "german short-haired pointer"
  input()   #demo
  leo.printDog()

  leo.age = "2"
  input()   #demo
  leo.printDog()

  leo.size = "medium"
  input()   #demo
  leo.printDog()

  input()   #demo
  simba.printDog()

  input()
  simba.happyBirthday()
  input()
  simba.printDog()
  input()

  simba.happyBirthday()
  simba.printDog()

  howie = Dog()
  howie.name = "Howie"
  howie.breed = "chihuahua"
  howie.age = "3"
  howie.size = "small"
  howie.printDog()
  
