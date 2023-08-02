''' How to Program a Simple Calculator in Python '''
''' Things to Know: 
       1.   Data Types
            a.   Int (integer) - any whole number
            b.   Float - decimal numbers
            c.   String - sequences of characters surrounded by '' 
       2.   Input
            a.   Every input needs to be given a variable name
            b.   Variable names allow us to access data input by the user
                 as we run our program
            c.   Cannot type characters in float() input because data 
                 types do not match
       3.   While Loop 
            a.   While loops run repeatedly based on a condition
            b.   Once the condition is not met, the block of code does
                 stops repeating
            c.   The calculator continues forever, so our condition 
                 remains True forever
            d.   The contents of a while loop is dictated by what is 
                 indented underneath it. 
       4.   If Else Statements
            a.   If Statements run conditionally based on a condition
            b.   Since = is the assignment operator, == is used to test 
                 for equality. != is used to test for inequality 
            c.   If a statements condition is met, the contents of the 
                 statement are executed
            d.   The contents of an if statement are dictated by what is 
                 indented underneath it. 
       3.   Operations
            a.   Operations in python are the same as in math
            b.   The syntax for reassigning a number to itself 
                 with an operation (a = a + 3) uses shorthand operators 
                 (a += 3) 
       4.   Import OS
            a.   External package that gives access to the console while 
                 the program is running'''

import os

total = float(input()) 

while True: 
  operation = input()
  if (operation == 'c') :
    os.system('clear')
    total = 0 
    print(total)
  else :
    value = float(input())
    if (operation == '+') :
      total += value 
    elif (operation == '-') :
      total -= value
    elif (operation == '*') :
      total *= value
    elif (operation == '/') :
      total /= value
    print("-------")
    print(total)
    


'''
total = float(input("  ")) 

while True: 
  symbol = input()
  if (symbol != 'c') :
    number = float(input("  "))
    if (symbol == '+') :
      total += number 
    elif (symbol == '-') :
      total -= number
    elif (symbol == '*') :
      total *= number
    elif (symbol == '/') :
      total /= number
    print("────────")
    print(" ", total)
  else :
    os.system('clear')
    total = 0 
    print(" ", total)
    
      '''
