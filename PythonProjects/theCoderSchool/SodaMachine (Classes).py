class Soda:
  def __init__(self):
    self.name = ""
    self.cost = 0
    self.quantity = 0

  def displayMenu():
    print("1. Cola")
    print("2. Root Beer")
    print("3. Lemon-Lime")
    print("4. Grape Soda")
    print("5. Cream Soda")
    print("Enter 99 to Quit")
    print()


if __name__ == "__main__" :
  cola = Soda()
  cola.name = "Cola"
  cola.cost = 0.75
  cola.quantity = 20

  rootBeer = Soda()
  rootBeer.name = "Root Beer"
  rootBeer.cost = 0.75
  rootBeer.quantity = 20
  
  lemonLime = Soda()
  lemonLime.name = "Lemon-Lime"
  lemonLime.cost = 0.75
  lemonLime.quantity = 20

  grapeSoda = Soda()
  grapeSoda.name = "Grade Soda"
  grapeSoda.cost = 0.80
  grapeSoda.quantity = 20
  
  creamSoda = Soda()
  creamSoda.name = "Cream Soda"
  creamSoda.cost = 0.80
  creamSoda.quantity = 20
  
  sodaList = [cola, rootBeer, lemonLime, grapeSoda, creamSoda]

  machineTotal = 0 
  payment = 0 
  change = 0
  
  Soda.displayMenu()

  
  selection = int(input("Make a selection: "))
  while (selection != 99):
    selection -= 1

    print("You selected a " + sodaList[selection].name)
    print(sodaList[selection].name + " costs $" + "{:.2f}".format(sodaList[selection].cost))
    print()

    if (sodaList[selection].quantity == 0) :
      print(sodaList[selection].name + " is sold out.")
    else :
      sodaList[selection].quantity -= 1
      machineTotal += sodaList[selection].cost
      payment = float(input("Enter payment: $"))
      if ((payment - sodaList[selection].cost) > 0) :
        change = payment - sodaList[selection].cost
        print("Your change is $" + "{:.2f}".format(change))
        print()

        Soda.displayMenu()
        selection = int(input("Make a selection: "))

        

  print()
  print("This machine made $" + "{:.2f}".format(machineTotal) + " total.")
