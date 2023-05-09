import random, time

def coinToss(repeat):
  headsCounter = 0
  for turn in range(repeat):
    resultList = ["Heads!", "Tails!"]
    result = random.choice(resultList)
    if result == "Heads!" :
      headsCounter += 1
    print(str(turn+1) + ". " + result)
  return headsCounter 

if __name__ == "__main__" :
  tries = int(input("How many times would you like to flip a coin?:  "))

  while (tries < 0):
    print(str(tries) + " is an invalid number of coin flips.")
    tries = int(input("How many times would you like to flip a coin?:  "))
  print("Flipping coin " + str(tries) + " times...")
  time.sleep(2)
  print("                     ...")
  time.sleep(1)
  print("                     ...")
  time.sleep(1)
  print()
  print(" Results!")
  print("----------")
  heads = coinToss(tries)

  print("Heads :  ", (heads/tries)*100, "%")
  print("Tails :  ", ((tries-heads)/tries)*100, "%")

  print("Goodbye!")
