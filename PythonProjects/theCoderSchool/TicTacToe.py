gameboard = [['*', '*', '*'],
             ['*', '*', '*'],
             ['*', '*', '*']]

winner = False 
turns = 0
while (winner == False):
  row = int(input("Which row do you want to play?"))
  col = int(input("Which column do you want to play?"))
  row-=1
  col-=1
  gameboard[row][col] = 'X' 
  turns += 1
  for rowIndex in range(3) :
    for colIndex in range(3) :
      print(gameboard[rowIndex][colIndex], end=' ')
    print()

  if turns == 9 :
    winner = True
  if (gameboard[0][0] == 'X' and gameboard[0][1] == 'X' and gameboard[0][2] == 'X') :
    print("X Wins!") 
    winner = True 
  if (gameboard[1][0] == 'X' and gameboard[1][1] == 'X' and gameboard[1][2] == 'X') :
    print("X Wins!") 
    winner = True 
  if (gameboard[2][0] == 'X' and gameboard[2][1] == 'X' and gameboard[2][2] == 'X') :
    print("X Wins!") 
    winner = True 
  if (gameboard[0][0] == 'X' and gameboard[1][0] == 'X' and gameboard[2][0] == 'X') :
    print("X Wins!") 
    winner = True
  if (gameboard[0][1] == 'X' and gameboard[1][1] == 'X' and gameboard[2][1] == 'X') :
    print("X Wins!") 
    winner = True 
  if (gameboard[0][2] == 'X' and gameboard[1][2] == 'X' and gameboard[2][2] == 'X') :
    print("X Wins!") 
    winner = True 
  if (gameboard[0][0] == 'X' and gameboard[1][1] == 'X' and gameboard[2][2] == 'X') :
    print("X Wins!") 
    winner = True 
  if (gameboard[0][2] == 'X' and gameboard[1][1] == 'X' and gameboard[2][0] == 'X') :
    print("X Wins!") 
    winner = True 
    
  if (winner == False) :
    row = int(input("Which row do you want to play?"))
    col = int(input("Which column do you want to play?"))
    row-=1
    col-=1
    gameboard[row][col] = 'O' 
    turns += 1
    for rowIndex in range(3) :
      for colIndex in range(3) :
        print(gameboard[rowIndex][colIndex], end=' ')
      print()
  
    if (gameboard[0][0] == 'O' and gameboard[0][1] == 'O' and gameboard[0][2] == 'O') :
      print("O Wins!") 
      winner = True 
    if (gameboard[1][0] == 'O' and gameboard[1][1] == 'O' and gameboard[1][2] == 'O') :
      print("O Wins!") 
      winner = True 
    if (gameboard[2][0] == 'O' and gameboard[2][1] == 'O' and gameboard[2][2] == 'O') :
      print("O Wins!") 
      winner = True 
    if (gameboard[0][0] == 'O' and gameboard[1][0] == 'O' and gameboard[2][0] == 'O') :
      print("O Wins!") 
      winner = True
    if (gameboard[0][1] == 'O' and gameboard[1][1] == 'O' and gameboard[2][1] == 'O') :
      print("O Wins!") 
      winner = True 
    if (gameboard[0][2] == 'O' and gameboard[1][2] == 'O' and gameboard[2][2] == 'O') :
      print("O Wins!") 
      winner = True 
    if (gameboard[0][0] == 'O' and gameboard[1][1] == 'O' and gameboard[2][2] == 'O') :
      print("O Wins!") 
      winner = True 
    if (gameboard[0][2] == 'O' and gameboard[1][1] == 'O' and gameboard[2][0] == 'O') :
      print("O Wins!") 
      winner = True 

if turns == 9 :
  print("Tie")
