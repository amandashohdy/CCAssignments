"""
Calculate Income From Ticket Sales

This program calculates the total income from three kinds of softball game tickets.
"""

PRICE_A = 15.00
PRICE_B = 12.00
PRICE_C = 9.00

classA = int(input("How many class A tickets were purchased? : "))
classB = int(input("How many class B tickets were purchased? : "))
classC = int(input("How many class C tickets were purchased? : "))

incomeA = classA * PRICE_A
incomeB = classB * PRICE_B
incomeC = classC * PRICE_C
totalIncome = incomeA + incomeB + incomeC

print()
print("The income from class A tickets is $" + "{:.2f}".format(incomeA) + ".")
print("The income from class B tickets is $" + "{:.2f}".format(incomeB) + ".")
print("The income from class C tickets is $" + "{:.2f}".format(incomeC) + ".")
print("The total income from all ticket sales is $" + "{:.2f}".format(totalIncome))
