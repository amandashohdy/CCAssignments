import random

again = True
while (again == True) :
  a = random.randrange(1, 10)
  b = random.randrange(1, 10)
  answer = a + b
  
  print(" " + str(a))
  print("+")
  print(" " + str(b))
  print("______")
  print()
  
  userAnswer = int(input("What is your answer::: "))
  print()
  
  if (answer == userAnswer) :
    print("That is correct!")
    print()
    print(" " + str(a))
    print("+")
    print(" " + str(b))
    print("______")
    print(" " + str(answer))
  else :
    print("That is not correct.")
    print("The correct answer is:")
    print(" " + str(a))
    print("+")
    print(" " + str(b))
    print("______")
    print(" " + str(answer))

  print()
  again = input("Would you like another problem? (Y or N)::: ")
  print()
  
  if (again.upper() == 'Y') :
    again = True
  else :
    print("Goodbye!")
    again = False
