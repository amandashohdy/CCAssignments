#Function are defined with the def keyword
import functions  #as f

functions.my_function()
print("----------------------------")

#parameters are variable names in the function
#definition arguments are specified after the
#function call. You can add as many as you want

fName = "John"
lName = "Smith"
functions.print_first_name(fName)
functions.print_full_name(fName, lName)
print("----------------------------")


#if you don't know how many arguments will
#be passed into your function, add a '*'
#to your parameter name.
#Your function will then receive a tuple of
#arguments
def print_name(*names):
  length = len(names)
  print(names[0], names[length - 1])


print_name("John", "Michael", "Smith")
print("----------------------------")


#you can also send arguments using the parameter
#names in the key=value syntax
#order does not matter
def youngest(old, middle, young):
  print("The youngest child is", young)


youngest(old="Mary", young="Lily", middle="Katrina")


#Using two asterisks will pass a dictionary to
#the function
def printName(**fullName):
  print(fullName["last"] + ", " + fullName["first"])


printName(first="John", last="Smith")
print("----------------------------")


#function can have default parameters
def printCountry(country="Sweden"):
  print("I am from", country + "!")


printCountry("Denmark")
printCountry()
printCountry("Lebanon")
print("----------------------------")


#function return values
def multiply5(x):
  return x * 5


print(multiply5(4))
print(multiply5(1))

#function practice prompts

# 1. Markups
#Write a program that asks the user to enter an item's wholesale cost and its markup percentage. It should then display the items retail price.
#The program should have a function that receives the wholesale cost and the markup percentage as arguments, and returns the retail price of the item.
#Input Validation - do not accept negative values for either the wholesale cost of the item or the markup percentage
#EXAMPLES
#  If an item's wholesale cost is $5.00 and the markup percentage is 1.0, then the item's retail price is $10.00.
#  If an item's wholesale cose is $5.00 and the markup percentage is 0.5, the the item's retail price is $7.50.

# 2. Lowest Test Scores
#Write a program that calculates the average of a group of test scores, where the lowest score in the group is dropped. It should use the following functions.
#  A function to calculate and display the average of the four highest scores. This function should be called just once by main, and should be passed the five scores.
#Input Validation - do not accept test scores lower than 0 or higher than 100.
# min(x)

# 3. Miles Per Gallon
# Write a program that calculates a car's gas mileage. The program should ask the use to enter the number of gallons of gas the car can hold, and the number of miles it can be driven on a full tank. It should then display the number of miles that may be driven per gallon of gas
# Take input in main, use a function to perform the calculation, display the number of miles that can be driven in main.

# 4. How Many Calories?
# Write a program that asks the user to input how many cookies he or she ate and reports how many total calories were consumed.
# A bag of cookies holds 40 cookies. The calorie information on the bag claims that there are 10 servings in the bag and taht a serving is 300 calories.
# Take input in main, use a function to perform the calculation, display the calories in main.

# 5. Winning Division
# Write a program that determines which of a company's four divisions (North, South, East, or West) had the greatest sales for a quarter. It should include the following two functions, which are called by main.
#   getSales(division_name) : this function is passed the name of a division. It asks the user for a division's quarterly sales figure, validates the input, then returns it. It should be called once for each division.
#   findHighest(north, south, east, west) : this function is passed the four sales totals. It determines which is the largest and prints the name of the highest grossing division along with its sales figures.
#  Input Validation: Do not accept dollar amounts less than 0.

# 6. Days Out
# Write a program that calculates the average number of days a company's employees are absent. The program should have the following functions:
#    A function that asks the user for the number of employees in the company, validates the number, and returns the number.
#   A function that accepts one argument: the number of employees in the company. The function should ask the user to enter the number of days each employee missed during the past year and validate it. The total of these days should be returned.
# Using the total number of employees and the number of days absent, the average days missed is calculated and displayed.
#  Input Validation: Do not accept numbers less than 1 for number of employees. Do not accept negative numbers for days absent.
