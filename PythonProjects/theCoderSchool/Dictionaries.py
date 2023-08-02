''' Use a dictionary to store student's ID numbers and grades. 
    The dictionary should start with just the header 'ID : Grade'     The user should use a menu that has options change a grade,       remove an ID, add an ID, show the grades, and quit.'''
















def printMenu() :
  print("1. Change a grade")
  print("2. Remove an ID #")
  print("3. Add an ID #")
  print("4. Show the grades")
  print("5. Quit")


if __name__ == "__main__" :  
  studentGrades = {
    "ID ": "Grade"
  }

  printMenu()
  selection = input("Select an option: ")
  print()
  while selection != "5" :
    if selection == "1" :
      changeID = int(input("Enter the ID # to change grade: "))
      if changeID in studentGrades :
        newGrade = int(input("Enter the new grade: "))
        studentGrades[changeID] = newGrade
        print()
      else :
        print("ID # does not exist.")
        print()

    elif selection == "2" :
      removeID = int(input("Enter ID # to be removed: "))
      if removeID in studentGrades :
        studentGrades.pop(removeID)
        print()
      else :
        print("ID # does not exist.")
        print()

    elif selection == "3" :
      addID = int(input("Enter the new ID #: "))
      addGrade = int(input("Enter the grade for the new ID # : "))
      if addID not in studentGrades :
        studentGrades.update({addID : addGrade})
        print()
      else :
        print("ID # already exists.")
        print()

    elif selection == "4" :
      for id in studentGrades:
        print(id, ": ", studentGrades[id])
      print()

    elif selection != "5" :
      print("Invalid Selection.")
      print()

    printMenu()
    selection = input("Select an option: ")
    print()
