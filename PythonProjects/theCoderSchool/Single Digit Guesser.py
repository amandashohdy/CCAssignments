correctNumber = 5
userGuess = int(input("Guess the number: "))
if userGuess == correctNumber :
  print("Correct")
elif userGuess < correctNumber :
  print("Your guess is less than the number.")
elif userGuess > correctNumber :
  print("Your guess is greater than the number.")
