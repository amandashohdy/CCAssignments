# Amanda Shohdy
# 12/4/2021

def printHeart() :
    print("<3\n")
    menuWork()

def sayHello() :
    userInput = input("What is your name?\n")
    print(f"Hello, {userInput}\n")
    menuWork()

def printN() :
    userInput = input("Give me an N number\n")
    if userInput.isdigit() == True :
        print((int(userInput) * ("*")) + "\n")
    else :
        print("Sorry, this is not a number, going back to the menu...")
    menuWork()

def menuWork() :

    entry = input('''1 - Print a heart.
2 - Say hello to me!
3 - Print exactly N "*".
q - Quit.\n\n''')
    
    if entry == "1" :
        printHeart()
    elif entry == "2" :
        sayHello()
    elif entry == "3" :
        printN()
    elif entry == "q" :
        pass
    else :
        print("This is not an option, sorry.\n")


if __name__ == '__main__' :
    menuWork()  
    
