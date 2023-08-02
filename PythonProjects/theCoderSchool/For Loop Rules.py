list = ["apple", "banana", "orange", "pear", "kiwi"]

#a break statement will end the loop
for fruit in list :
  if fruit == "orange" :
    break
  print(fruit)
print("---------------------")

#a continue statement will end the current cycle and continue to the next
for fruit in list :
  if fruit == "orange" :
    continue
  print(fruit)
print("---------------------")

#for loops can have else statements
for fruit in list :
  print(fruit)
else :
  print("done!")
print("---------------------")

#break statements nullify the else statement 
for fruit in list :
  if fruit == "orange" :
    break
  print(fruit)
else :
  print("DONE!")
print("---------------------")

#continue statements do not affect the execution of the else 
for fruit in list :
  if fruit == "orange" :
    continue
  print(fruit)
else :
  print("DONE!")
print("---------------------")

for fruit in list : 
  if fruit == "orange" :
    pass
    print(fruit)
  else :
    print("done")
