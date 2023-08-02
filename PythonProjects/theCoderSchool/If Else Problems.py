# If person is 16 years or older, print "License"
# Otherwise, print "No License"
person = 13
if person >= 16 :
  print ("license")
else :
  print ("No license for you!")



# If the parameter weekday is False, we sleep in.
# If the parameter vacation is True, we sleep in
weekday = True
vacation = True
if weekday == False or vacation == True :
  print("Sleep in!")
else :
  print("Wake up early :(")



# Given an int n, print True if it is within 10 of 100.
n = 105
if 100 - n <= 10 or n - 100 >= 10 :
  print("Close to 100!")
else :
  print("Not close to 100")



# Given two int values, print their sum.
# If the two int values are the same, print double their sum.
num1 = 10
num2 = 10
if num1 == num2 :
  print((num1 + num2) * 2)
else :
  print(num1 + num2)




# Given 2 ints, a and b, print 10! if one of them is 10 or if their sum is 10. 
# Otherwise, print not 10:(
a = 10
b = 10
if (a == 10 or b == 10 or a+b == 10) :
  print("10!")
else :
  print("not 10:(")


# Given 2 integer values, print both negative if both of the values are negative, print one negative if one is negative and positive if both are positive
num1 = 100
num2 = 6
if num1 < 0 and num2 < 0 :
  print("both negative")
elif num1 < 0 or num2 < 0 :
  print("one negative")
else :
  print("positive!")



# Given a string, print a new string where "not" has been added to the front. 
# However, if the string already begins with "not", print the string unchanged
string = "cat"
if "not" in string: 
  print(string)
else :
  print("not " + string)
