def bubbleSort(list) :
  n = len(list)
  for i in range(n) :
    for j in range(n-i-1) :
      if list[j] > list[j+1] :
        temp = list[j]
        list[j] = list[j+1]
        list[j+1] = temp

def printList(list) :
  for i in range(len(list)) :
    print(str(i+1) + ". " + list[i])
  print()
        

if __name__ == "__main__" :
  namesList = []
  
  selection = input("Add a name or type done to end: ")
  while (selection != "done"):
    namesList.append((selection.upper()))
    selection = input("Add a name or type done to end: ")

  n = len(namesList)
  for i in range(n) :
      for j in range(n-i-1) :
        if namesList[j] > namesList[j+1] :
          namesList[j], namesList[j+1] = namesList[j+1], namesList[j]
  printList(namesList)
