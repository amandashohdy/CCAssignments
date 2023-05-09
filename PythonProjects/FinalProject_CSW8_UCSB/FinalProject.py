# Amanda Shohdy, CSW8 (F21)
# 12/9/2021


def print_main_menu(the_menu) :
    """
    Prints the main menu.
    """
    print("*" * 26)
    print("What would you like to do?")
    for index in the_menu :
        print(f"{index} - {the_menu[index]}")
    print("*" * 26)




def check_option(option, menu) :
    """
    Returns "invalid" if the provided 'option
    is not one of the keys in the given 'menu'.
    Returns "valid" otherwise.
    """
    if (option in menu) :
        return "valid"
    else :
        if type(option) == str and option.isdigit() != True :
            print(f"WARNING: `{option}` is not an integer.\nPlease enter an integer.")
            return "invalid"
        else :
            print(f"WARNING: `{option}` is an invalid option.")
            print("Please enter a valid option.")
            return "invalid"





def list_categories(dictionary, showID = False) :
    """
    Displays the categories and the percent of
    the grade each category is worth.
    When showID is True, the dictionary keys are
    printed as well.
    """
    if showID == False :
        if len(dictionary) == 0 :
            print("There are no categories.")
        elif len(dictionary) == 1 :
            print("There is only 1 category:")
        else :
            print(f"There are {len(dictionary)} categories:")
        for item in dictionary :
            print(f"{dictionary[item][0].upper()} : {dictionary[item][1]}%")
    if showID == True :
        if len(dictionary) == 0 :
            print("There are no categories.")
        elif len(dictionary) == 1 :
            print("There is only 1 category:")
        else :
            print(f"There are {len(dictionary)} categories:")
        for item in dictionary :
            print(f"{item} - {dictionary[item][0].upper()} : {dictionary[item][1]}%")
    return len(dictionary)





def create_id(dictionary, offset = 0) :
    """
    Returns the integer ID that would be
    generated for the next value inserted
    into the `db`.
    """
    newDict = {}
    for key in dictionary :
        newDict[key] = dictionary[key]
    
    if len(dictionary) == 0 :
        return offset
    else :
        maximum = offset
        for key in dictionary :
            if key > maximum :
                maximum = key
        nextID = int(maximum) + 1 + offset
        return nextID


def is_numeric(val) :
    """
    Returns True if the string 'val'
    contains a valid integer or a float.
    """
    countDecimal = 0
    for char in val :
        if char.isdigit() == True :
            continue
        elif char == '.' and countDecimal == 0 :
            countDecimal += 1
            continue
        else :
            return False
    return True


def add_category(db, cid, info_str) :
    """
    Takes in a dictionary, categoryID,
    and a string and adds the category
    to the dictionary.
    """
    infoList = info_str.split()
    if len(infoList) != 2 :
        return -2
    percentage = infoList[1]
    if (is_numeric(percentage) == False) :
        return -1
    db[cid] = [infoList[0], float(infoList[1])]
    return cid


def add_categories(db, max_num, id_offset) :
    """
    Interacts with the user and calls
    create_id() and add_category() to
    collect the necessary information
    to add one or more categories.
    """
    print(f"You can add up to {max_num} categories.")
    print("::: How many categories will you add?")
    adding = input("> ")
    while adding.isdigit() == False :
        print(f"`{adding}` is not a valid integer.")
        print("::: Enter a valid number of categories you plan to add")
        adding = input("> ")
        adding.isdigit()
    adding = int(adding)

    if len(db) + adding > max_num :
        print(f"WARNING: Adding {adding} categories would exceed the allowable max.")
        print(f"You can store up to {max_num} categories.")
        print(f"Current total of categories is {len(db)}.")

    else :
        category = 1
        while adding > 0 :
            cycle = False
            print(f"::: Enter the category {category} name (no spaces) followed by its percentage")
            while cycle == False :
                userInput = input("> ")
                if (userInput == 'm' or
                    userInput == 'M') :
                    adding = 0
                    break
                userList = userInput.split()
                if (len(userList) == 2) :
                    if (is_numeric(userList[1]) == True) :
                        break
                print("WARNING: invalid input for the name and percentage.")
                print(f"::: Enter the category {category} name (no spaces) followed by its percentage")
                print("::: or enter M to return back to the menu.")

            userID = create_id(db, id_offset)
            add_category(db, userID, userInput)
            category += 1
            adding -= 1





def update_category(db) :
    """
    Takes in a category ID from the
    user and updates the ID with a new
    name and corresponding percentage.
    """
    print("Below is the info for the current categories.")
    list_categories(db, True)
    if len(db) != 0 :
        print("::: Enter the category ID that you want to update")
        userInput = input("> ")
        cont = True
        while int(userInput) not in db :
            print(f"WARNING: `{userInput}` is not an ID of an existing category.")
            print("::: Enter the ID of the category you want to update")
            print("::: or enter M to return back to the menu.")
            userInput = input("> ")
            if (userInput == 'm' or
                userInput == 'M') :
                cont = False 
                break

        if cont == True :
            print(f"Found a category with ID `{userInput}`:")
            print("::: Enter the updated info:\n    category name followed by the percentage.")
            newCat = input("> ")
            addCat = add_category(db, int(userInput), newCat)
            if addCat == -2 :
                print(f"WARNING: insufficient information for the update.")
                print(f"Record with ID `{userInput}` was not updated!")
            if addCat == -1 :
                print(f"WARNING: invalid input for the name and/or percentage.")
                print(f"Record with ID `{userInput}` was not updated!")





def delete_category(db) :
    """
    Prompts the user for the
    category ID of the information
    they would like to delete.
    Verifies and deletes the
    selection.
    """
    print("Below is the info for the current categories.")
    if list_categories(db, True) > 0 :
        print("::: Enter the category ID that you want to delete")
        userID = input("> ")
        cont = True
        while int(userID) not in db :
            print(f"WARNING: `{userID}` is not an ID of an existing category.")
            print("::: Enter the ID of the category you want to delete")
            print("::: or enter M to return back to the menu.")
            userID = input("> ")
            if (userID == 'm' or
                userID == 'M') :
                cont = False
                break

        if cont == True :
            print(f"Found a category with ID `{userID}`:")
            print(f"{db[int(userID)]}")
            print("::: Are you sure? Type Y or N")
            sure = input("> ")
            if (sure == 'y' or
                sure == 'Y') :
                del db[int(userID)]
                print("Deleted")
            else :
                print("Looks like you aren't 100% sure.\nCancelling the deletion.")





def add_grades(db) :
    """
    Prompts the user to enter grades
    for a category and converts the
    grades to a list.
    """
    print("Below is the info for the current categories.")
    cont = True
    length = list_categories(db, True)
    if length > 0 :
        print("::: Enter the category ID for which you want to add grades")
        userID = input("> ")
        while int(userID) not in db :
            print(f"`{userID}` is not an ID of an existing category.")
            print("::: Enter the ID of the category to add grades to")
            print("::: or enter M to return back to the menu.")
            userID = input("> ")
            if (userID == 'm' or
                userID == 'M') :
                cont = False
                break
        if cont == True :
            userID = int(userID)
            category = db[userID][0].upper()
            print(f"You selected a {category} category")
            print("::: Enter space-separated grades")
            print("::: or enter M to return back to the menu.")
            userInput = input("> ")
            if (userInput == 'm' or
                userInput == 'M') :
                cont = False
            if cont == True :
                add_category_grades(db, userID, userInput)
                print(f"Success! Grades for the {category} category were added.")


def add_category_grades(db, cid, grades_str) :
    """
    Inserts into the `db` collection
    a list of grades for the provided
    category ID.
    """
    stringList = grades_str.split()
    gradesList = list()
    listLength = len(stringList)
    for item in stringList :
        if is_numeric(item) == False :
            return -1
    for item in stringList :
        gradesList.append(float(item))
    if (len(db[cid])) == 3 :
        if (len(db[cid][2]) != 0) :
            show_grades_category(db, cid)
            firstList = db[cid][2]
            gradesList = firstList + gradesList
            db[cid] = [db[cid][0], db[cid][1], gradesList]
            show_grades_category(db, cid)
            return listLength
    else :
        db[cid] = [db[cid][0], db[cid][1], gradesList]
        return listLength





def show_grades(db) :
    """
    Calls list_categories()
    If the dictionary is empty,
    return from the function.
    Prompts the user to enter a
    category ID or enter A for
    the grades of all categories.
    """
    cont = True
    print("Below is the info for the current categories.")
    length = list_categories(db, True)
    if length == 0 :
        return 0
    if length > 0 :
        print("::: Enter the category ID for which you want to see the grades")
        print("::: or enter A to list all of them.")
        userID = input("> ")
        if (userID == 'a' or
            userID == 'A') :
            for index in db :
                if len(db[index]) == 3 :
                    show_grades_category(db, db[index])
                cont = False
        if (userID != 'a' and
            userID != 'A') :
            while int(userID) not in db :
                print(f"WARNING: `{userID}` is not an ID of an existing category.")
                print("::: Enter a valid category ID to see the grades")
                print("::: or enter M to return back to the menu.")
                userID = input("> ")
                if (userID == 'm' or
                    userID == 'M') :
                    cont = False
                    break
        
    if cont == True :    
        show_grades_category(db, userID)


def show_grades_category(db, cid) :
    """
    Displays grades added to the db
    collection for a provided ID.
    """
    if len(db[int(cid)]) != 3 :
        print(f"No grades were provided for category ID `{cid}`.")
        return 0
    else :
        print(f"{db[cid][0].upper()} grades {db[cid][2]}")
        return len(db[int(cid)][2])





def sum_percentages(db) :
    """
    Returns the sum of the
    percentage of each category.
    """
    gradeSum = 0
    for index in db :
        gradeSum += db[index][1]
    return gradeSum

def get_avg_grade(grade_list) :
    """
    Returns the average value
    of the given grades.
    """
    total = 0
    if len(grade_list) > 0 :
        for item in grade_list :
            total += item
        avg = total / len(grade_list)
        return avg

def grade_stats(db) :
    """
    Returns the computed course
    grade or returns 0 if
    there are no categories.
    """
    print("Below is the info for the current categories.")
    if list_categories(db) == 0 :
        return 0
    else :
        print("\nProvided grades:")
        for cid in db :
            if len(db[cid]) == 3 :
                show_grades_category(db, cid)
    print()
    if sum_percentages(db) != 100 :
        print(f"WARNING: Category percentages don't add up to 100.")
        print(f"Current category percentages comprise {sum_percentages(db)} of the total.\n")

    print("Grade calculation:")
    gradeTotal = 0
    for ID in db :
        percent = db[ID][1] * 0.01
        if len(db[ID]) == 3 :
            total =  get_avg_grade(db[ID][2]) * percent
            print(f"{db[ID][0]} = {get_avg_grade(db[ID][2]):.2f} * {percent} = {total:.2f}")
            gradeTotal += total
        else :
            print(f"{db[ID][0]} = 0.00 * {percent} = 0.00")
    print(f"Total grade = {gradeTotal:.2f}")





def save_data(db) :
    """
    Saves the dictionary db
    to a CSV file using the
    save_dict_to_csv() function.
    """
    import csv
    defaultFile = "grade_data.csv"
    print("Below is the info for the current categories.")
    if list_categories(db, True) == 0 :
        print("Skipping the creation of an empty file.")
        return 0
    print(f"::: Save to the default file ({defaultFile})? Type Y or N")
    userChoice = input("> ")
    if (userChoice == 'y' or
        userChoice == 'Y') :
        fileChoice = defaultFile
    else :
        fileChoice = input("::: Enter the name of the csv file to save.\n> ")
    save_dict_to_csv(db, fileChoice)
    print(f"Saving the database in {fileChoice}")
    print("Database contents:")
    print(db)
    

def save_dict_to_csv(db, filename) :
    """
    Saves the dictionary db
    as a csv file.
    """
    import csv
    with open(filename, 'w', newline='') as filename :
        writer = csv.writer(filename)
        dictionary = []
        for item in db :
            row2 = []
            row1 = [(item), (db[item][0]), (db[item][1])]
            if len(db[item]) == 3 :
                for grade in range(len(db[item][2])) :
                    row2.append(str(db[item][2][grade]))
                row = row1 + row2
            else :
                row = row1
            writer.writerow(row)





def load_dict_from_csv(filename) :
    """
    Opens a given file and stores
    its contents into a dictionary
    that is returned. 
    """
    import csv
    with open(filename, 'r') as filename :
        dictionary = dict()
        gradesList = list()

        reader = csv.reader(filename)
        for row in reader :
            if row == '' :
                return dictionary
            for index in range(len(row)) :
                if is_numeric(row[index]) == True :
                    row[index] = float(row[index])
            gradesList = row[3:]
            dictionary[int(row[0])] = [row[1], float(row[2]), gradesList]
    return dictionary
    

def load_data(db) :
    """
    Calls load_dict_from_csv()
    and prints the resulting
    database.
    """
    import csv
    import os
    filename = "grade_data.csv"
    print(f"::: Load the default file ({filename})? Type Y or N")
    userChoice = input("> ")
    if (userChoice != 'y' and
        userChoice != 'Y') :
        print("::: Enter the name of the csv file to load.")
        filename = input("> ")
    while (os.path.exists(filename) != True) or (filename[-4 :] != ".csv") :
        if (os.path.exists(filename) != True) :
            print(f"WARNING: Cannot find a CSV file named `{filename}`")
        else :
            print(f"WARNING: {filename} does not end with `.csv`")
            print(filename[-4 :])
        print("::: Enter the name of an existing csv file.")
        filename = input("> ")

    print(f"Reading the database from {filename}")
    new_db = load_dict_from_csv(filename)
    print("Resulting database:\n", new_db)
    db.update(new_db)






if __name__ == '__main__' :
    
    the_menu = {'1' : "List categories",
            '2' : "Add a category",
            '3' : "Update a category",
            '4' : "Delete a category",
            '5' : "Add grades",
            '6' : "Show grades",
            '7' : "Grade statistics",
            '8' : "Save the data",
            '9' : "Upload data from file",
            'Q' : "Quit this program"}
    
    main_db = {}
    max_cat = 10
    cat_id_offset = 100

    opt = None

    while True :
        print_main_menu(the_menu)
        print("::: Enter an option")
        opt = input("> ")

        if (opt == "Q" or
            opt == "q") :
            print("Goodbye!")
            break 
        else :
            if check_option(opt, the_menu) == 'invalid' :
                continue
            print("You selected option {} to > {}.".format(opt, the_menu[opt]))

        if opt == '1' :
            list_categories(main_db)
        if opt == '2' :
            add_categories(main_db, max_cat, cat_id_offset)
        if opt == '3' :
            update_category(main_db)
        if opt == '4' :
            delete_category(main_db)
        if opt == '5' :
            add_grades(main_db)
        if opt == '6' :
            show_grades(main_db)
        if opt == '7' :
            grade_stats(main_db)
        if opt == '8' :
            save_data(main_db)
        if opt == '9' :
            load_data(main_db)

        opt = input("::: Press Enter to continue...")

    print("See you next time!")
