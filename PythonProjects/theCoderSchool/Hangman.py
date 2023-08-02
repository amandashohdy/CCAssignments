import random

wordsList = ["lemon", "apple", "raspberry", "blueberry", "blackberry", "watermelon", "orange", "mango", "pineapple", "tomato", "banana"]
word = random.choice(wordsList)
userWord = []
wrongLetters = []
lives = 6

print("Guess the word! HINT: the word is the name of a fruit...")
print()
for letter in range(len(word)) :
  userWord.append("_ ")
print("--------------------------------------------------------")
print()

win = False
while (lives > 0 and win == False) :
  print("Letters guessed wrong: ")
  for letter in wrongLetters :
    print(letter, end=" ")
  print()
  letterGuessed = input("Guess a letter::: ")
  letterGuessed = letterGuessed.lower()
  if letterGuessed in word :
    for letter in range(len(word)) :
      if letterGuessed == word[letter] :
        userWord[letter] = letterGuessed + " "
    for letter in userWord :
      print(letter, end=" ")
    print()
  else :
    lives -= 1
    print("Letter " + letterGuessed + " is not in the word")
    wrongLetters.append(letterGuessed)

  print()
  print("Lives left: " + str(lives))
  print()
  print()

  if "_ " not in userWord :
    win = True
    print("You won!")
    
if win == False :
  print("You lost. The word was " + word + ".")
