class Dog:

  def __init__(self):
    self.name = "?"
    self.breed = "?"
    self.age = "?"
    self.size = "?"

  def happyBirthday(self):
    print("Happy Birthday " + self.name + "!")
    self.age = str(int(self.age) + 1)

  def printDog(self):
    print(self.name + " is a " + self.breed + ". " + self.name + " is " +
          self.age + " years old and is a(n) " + self.size + " sized dog.")
    print()


if __name__ == "__main__":
  dog1 = Dog()
  dog1.name = "Simba"
  dog1.breed = "german shepherd"
  dog1.age = "8"
  dog1.size = "x-large"

  dog2 = Dog()
  dog2.name = "Leo"
  dog2.breed = "german short-haired pointer"
  dog2.age = "2"
  dog2.size = "medium"

  dog1.printDog()
  dog2.printDog()

  dog1.happyBirthday()
  dog1.printDog()

  #make your own dog object!
