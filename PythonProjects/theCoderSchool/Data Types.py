'''
Text Type:         string (str)
Numeric Types :    integer (int), float, complex
Sequence Types :   list, tuple, range
Mapping Type :     dictionary (dict)
Set Types :        set, frozenset
Boolean Types :    boolean (bool)
'''
'''to find the type of a variable...'''
x = 'fill in with any value'
#print(type(x))
'''EXAMPLES'''
c = 1j  #complex
t = ('dog', 'cat', 'bird')  #tuple
s = {'dog', 'cat', 'bird'}  #set
f = frozenset({'dog', 'cat', 'bird'})  #frozenset
'''____STRINGS____'''
'''you can assign a multiline string to a variable using triple quotes'''
a = """This is line 1.
This is line 2.
This is line 3."""
#print(a)
'''a string is an array, meaning you can use indexing
      but this also can cause IndexErrors'''
word = "hello!"
#print(word[5])
'''this same logic applies to looping through a string'''
for character in 'string':
  print(character)
  pass
'''to find the amount of characters in a string, use the length function'''
s = 'string'
length = len(s)
#print(length)
'''the in keyword returns a boolean value and can be using in if statements'''
string = 'this is the string'
#print('is' in string)
#print('hey' in string)
'''the not in keyword works the same way'''
#print('is' not in string)
#print('hey' not in string)
'''String Slicing'''
'''Specify the start index and the end index (not included) separated by a colon
    use brakets as if you are indexing a part of the string'''
slicing = 'slice the string!'
#print(slicing[10:16])
'''to slice from the beginning, you can leave out the first number or put 0'''
#print(slicing[:6])
#print(slicing[0:6])
'''to slice till the end, leave out the second number'''
#print(slicing[10:])
'''negative indexing will work backwards'''
#print(slicing[-1])
#print(slicing[-7:-1])
'''String Modification'''
'''the upper() and lower() methods change the case of the string'''
modify = 'Modifications!'
#print(modify.upper())
#print(modify.lower())
'''you can also reassign a string with a new case'''
modify = modify.upper()
#print(modify)
'''the isupper() and islower() methods return whether or not all characters are upper or lower case'''
#print(modify.isupper())
#print(modify.islower())
'''the strip() method removes any whitespace from the beginning or end of a string'''
modify = "          modifications   "
#print(modify)
#print(modify.strip())
'''the replace() method replaces a string with another string'''
replacing = 'teplace'
#print(replacing.replace('t', 'r'))
''' the split method splits the string if it finds an instance of the separator'''
name = 'James, Bond'
#print(name.split(','))
'''Concatenate Strings'''
'''merging two strings'''
a = 'A'
b = 'B'
ab = a + b
#print(ab)
'''or'''
a_b = a + ' ' + b
#print(a_b)
'''Formatting Strings'''
'''the format method takes passed arguments, formats them, and places them into a string with {} placeholders'''
age = 32
'''instead of'''
text = 'Henry is ' + str(age) + ' years old.'
#print(text)
'''the code is'''
text = 'Henry is {} years old.'
#print(text.format(age))
'''this works with multiple variables in order'''
amount = 10
itemNum = 94037
cost = 12.99
text = '{} units of item {} for ${} each.'
#print(text.format(amount, itemNum, cost))
'''or you can index the parameters'''
text = 'the cost of item {1} is ${2} each for {0} units.'
#print(text.format(amount, itemNum, cost))
'''to print formatted numbers to a certain amount of decimal places'''
num = 12.99473836546
num2 = 100
#print("{:.2f}".format(num))
#print("{:.2f}".format(num2))
'''Escape Characters'''
text = "This is how you would use \"double quotes\" in a string"
#print(text)
'''list of escape characters
Single Quote :   \'
Backslash :      \\
New Line :       \n
Tab :            \t
Backspace :      \b
'''
'''Some final string methods'''
val = 'python'
