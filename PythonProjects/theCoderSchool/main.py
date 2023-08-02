import random


def checkDigits(correct, user):
    results = ["x", "x", "x", "x", "x"]
    for index in range(len(correct)):
        if (correct[index] == user[index]):
            results[index] = "*"
    return results


if __name__ == "__main__":
    randomList = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

    correctList = [
        random.choice(randomList),
        random.choice(randomList),
        random.choice(randomList),
        random.choice(randomList),
        random.choice(randomList)
    ]

    win = False
    while (win == False):
        userGuess1 = int(input("First Digit: "))
        userGuess2 = int(input("Second Digit: "))
        userGuess3 = int(input("Third Digit: "))
        userGuess4 = int(input("Fourth Digit: "))
        userGuess5 = int(input("Fifth Digit: "))
        userList = [userGuess1, userGuess2, userGuess3, userGuess4, userGuess5]
        print("Your List:    ", end="")
        for i in userList:
            print(i, end="    ")
        print()

        resultsList = checkDigits(correctList, userList)
        print("Results  : ", resultsList)
        print()

        counter = 0
        for index in range(len(resultsList)):
            if (resultsList[index] == "*"):
                counter += 1
            if (counter == 5):
                print("You win!")
                win = True
