import random, time
#from random import randint

def diceRoll(amount) :
  for event in range(amount) :
    roll = random.randint(1, 6)
    if roll == 1 :
      print("-----------")
      print("|         |")
      print("|    .    |")
      print("|         |")
      print("-----------")
      print()

    elif roll == 2 :
      print("-----------")
      print("|  .      |")
      print("|         |")
      print("|      .  |")
      print("-----------")
      print()

    elif roll == 3 :
      print("-----------")
      print("|       . |")
      print("|    .    |")
      print("| .       |")
      print("-----------")
      print()

    elif roll == 4 :
      print("-----------")
      print("| .     . |")
      print("|         |")
      print("| .     . |")
      print("-----------")
      print()

    elif roll == 5 :
      print("-----------")
      print("| .     . |")
      print("|    .    |")
      print("| .     . |")
      print("-----------")
      print()

    elif roll == 6 :
      print("-----------")
      print("|  .   .  |")
      print("|  .   .  |")
      print("|  .   .  |")
      print("-----------")
      print()

if __name__ == "__main__" :
  amount = int(input("How many times would you like to roll the dice? :: "))
  print()
  print("Rolling...")
  time.sleep(1)
  print("       ...")
  time.sleep(1)
  print("       ...")
  time.sleep(1)
  print()
  print("  Results")
  print("***********")
  print()
  diceRoll(amount)
