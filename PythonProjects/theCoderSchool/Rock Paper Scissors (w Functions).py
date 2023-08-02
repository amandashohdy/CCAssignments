import random

def computerChoice():
  computerMove = random.randint(1,3)
  return str(computerMove)


def userChoice():
  cont = True
  while (cont):
    print("   1. Rock")
    print("   2. Paper")
    print("   3. Scissors")
    userMove = input("Make your move:  ")
    if (userMove != "1" and userMove != "2" and userMove != "3" and userMove != "paper" and userMove != "scissors" and userMove != "rock" and userMove != "Paper" and userMove != "Scissors" and userMove != "Rock"):
      print("Invalid Selection. Try Again.")
      print()
    else:
      if userMove == "1" or userMove == "Rock" or userMove == "rock" :
        userMove = 1
        cont = False
      elif userMove == "2" or userMove == "Paper" or userMove == "paper" :
        userMove = 2
        cont = False
      elif userMove == "3" or userMove == "Scissors" or userMove == "scissors" :
        userMove = 3
        cont = False
  return userMove


def winner(user, computer):
  winner = ""
  if (user == computer):
    winner = "Draw"
  elif (user == 1 and computer == 2):
    winner = "Computer wins! You chose rock and the computer chose paper."
  elif (user == 1 and computer == 3):
    winner = "You win! You chose rock and the computer chose scissors."
  elif (user == 2 and computer == 1):
    winner = "You win! You chose paper and the computer chose rock."
  elif (user == 2 and computer == 3):
    winner = "Computer wins! You chose paper and the computer chose scissors."
  elif (user == 3 and computer == 1):
    winner = "Computer wins! You chose scissors and the computer chose rock."
  elif (user == 3 and computer == 2):
    winner = "You win! You chose scissors and the computer chose paper."
  return winner


if __name__ == '__main__' :
  playAgain = True
  while (playAgain):
    play = input("Would you like to play rock, paper scissors? (Y or N):  ")
    if (play == 'Y' or play == 'y'):
      print(winner(userChoice(), computerChoice()))
      print()
      playAgain = True
    elif (play == 'N' or play == 'n'):
      print("Goodbye!")
      playAgain = False
    else :
      print("Invalid Selection.")
      playAgain = True
