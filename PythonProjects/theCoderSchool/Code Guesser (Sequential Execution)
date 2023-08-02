import random 

num1 = random.randrange(1, 10)
num2 = random.randrange(1, 10)
num3 = random.randrange(1, 10)
num4 = random.randrange(1, 10)
num5 = random.randrange(1, 10)

winner = False 
while (winner == False) :
  guess1 = int(input("Guess first number > "))
  guess2 = int(input("Guess second number > "))
  guess3 = int(input("Guess third number > "))
  guess4 = int(input("Guess fourth number > "))
  guess5 = int(input("Guess fifth number > "))

  resultsList = ['X', 'X', 'X', 'X', 'X']

  if (num1 == guess1):
    resultsList[0] = '*' 
    
  if (num2 == guess2):
    resultsList[1] = '*'

  if (num2 == guess2):
    resultsList[2] = '*'

  if (num2 == guess2):
    resultsList[3] = '*'

  if (num2 == guess2):
    resultsList[4] = '*'

  print (resultsList)

  counter = 0
  for item in resultsList :
    if (item == '*') :
      counter += 1

  if (counter == 5) :
    print("You are the winner!!")
    winner = True
