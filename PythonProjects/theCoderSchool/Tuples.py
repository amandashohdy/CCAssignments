#Tuples
#Tuples are ordered, unchangeable, and allow duplicate values
#Tuples can contain different data types
#Values in a tuple can be accessed through indexing and negative indexing

# to create a tuple with one value, you still need to include the ,
tuple1 = ("apple",)

#You can specify 
mainTuple = ("Zero", "One", "Two", "Three", "Four", "Five", "Six")
subTuple = mainTuple[3:5]
print(subTuple)

#You can use the in operator on a tuple
if "Two" in mainTuple :
  print("Two in tuple")

#To be able to change a tuple, it must be converted into a list, then back into a tuple
convertList = list(mainTuple)
convertList.append("Seven")
newTuple = tuple(convertList)
#you can add tuples as well
mainTuple += newTuple
print(mainTuple)

# you can also 'unpack' a tuple
fruits = ("apple", "banana", "orange")
red, yellow, orange = fruits
print(red, yellow, orange)
#if the amount of values in the tuple is different than the amount of values being assigned during unpacking, the use of an asterisk * can add values to a list
fruits = ("apple", "pepper", "carrot", "lettuce", "cabbage", "banana")
red, *veggie, yellow = fruits
print(veggie)


#you can join tuples with the plus sign +
tuple3 = fruits + mainTuple
print(tuple3)

#you can multiple tuples using the * operator
fruits *= 2
print(fruits)

#you can use the count(x) method to return the occurances of a certain value x
print(fruits.count("apple"))

#you can use index(x) to get the index of a specified value x
print(fruits.index("banana"))

#one main use for tuples is that functions can only return one value, so by putting return values in a tuple and unpacking them in main, we can return multiple values
def returnMoreValues() :
  x = 15
  y = "Hello"
  z = False
  return (x, y, z, "return")

val1, val2, val3, val4 = returnMoreValues()
print(val1, val2, val3, val4)
