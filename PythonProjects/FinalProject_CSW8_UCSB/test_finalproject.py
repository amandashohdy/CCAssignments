

from CSW8_finalproject import *

my_menu0 = {}
my_menu1 = {'1': "One"}
my_menu2 = {'1': "One", '2' : "Two"}

result = check_option(1, my_menu0)
print(f"--> check_option(1, my_menu0) returned `{result}`\n")
assert result == "invalid"

result = check_option(1, my_menu1)
print(f"--> check_option(1, my_menu1) returned `{result}`\n")
assert result == "invalid"

result = check_option('1', my_menu1)
print(f"--> check_option('1', my_menu1) returned `{result}`\n")
assert result == "valid"

result = check_option(2, my_menu2)
print(f"--> check_option(2, my_menu2) returned `{result}`\n")
assert result == "invalid"

result = check_option('2', my_menu2)
print(f"--> check_option('2', my_menu2) returned `{result}`")
assert result == "valid"

categories = {}
result = list_categories(categories)
print(f"--> list_categories with no records returned `{result}`")
assert result == 0

categories = {}
result = list_categories(categories)
print(f"--> list_categories with no records returned `{result}`")
assert result == 0

categories0 = {}
result = create_id(categories)
print(f"--> create_id with no records returned `{result}`")
assert result == 0

categories1 = {111: "Test"}
result = create_id(categories1)
print(f"--> create_id with max record key 111 returned `{result}`")
assert result == 112

categories2 = {111: "Test", 1000: "Test"}
result = create_id(categories2)
print(f"--> create_id with max record key 1000 returned `{result}`")
assert result == 1001

categories2 = {111: "Test", 1000: "Test"}
offset = 10
result = create_id(categories2, offset)
print(f"--> create_id with max record key 1000 and offset={offset} returned `{result}`")
assert result == 1011

result = is_numeric('123')
print(f"--> is_numeric('123') returned `{result}`")
assert result == True

result = is_numeric('abc')
print(f"--> is_numeric('abc') returned `{result}`")
assert result == False

result = is_numeric('5.5')
print(f"--> is_numeric('5.5') returned `{result}`")
assert result == True

result = is_numeric('5.5.')
print(f"--> is_numeric('5.5.') returned `{result}`")
assert result == False


categories0 = {}
catID = 1
result = add_category(categories0, catID, 'Quiz 25')
print(f"--> add_category(categories0, {catID}, 'Quiz 25') returned `{result}`")
assert result == catID

print("-->", categories0)
print("-->", categories0[catID])
assert categories0[1] == ["Quiz", 25.0]


categories0 = {}
catID = 1
print("-->", categories0)
result = add_category(categories0, catID, 'Quiz A')
print(f"--> add_category(categories0, {catID}, 'Quiz A') returned `{result}`")
assert result == -1
print("-->", categories0)
assert categories0 == {}


categories0 = {}
catID = create_id(categories0, 1000) # should be 1000
result = add_category(categories0, catID, 'Test 5.5')
print(f"--> add_category(categories0, {catID}, 'Test 5.5') returned `{result}`")
assert result == catID
print("-->", categories0)
print("-->", categories0[catID])
assert categories0[1000] == ["Test", 5.5]


