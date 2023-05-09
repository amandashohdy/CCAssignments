# Amanda Shohdy
# 11/2/2021

def reformatting(q, a) :
    print("\nQuestion:\n" + q + "\n")
    reformat = input("Would you like to reformat your question? ")
    if (reformat == "yes" or reformat == "Yes") :
        add_questions()
    elif (reformat == "no" or reformat == "No") :
        question_dictionary[q] = a
        print("\nYour assignment:\n" + str(question_dictionary) + "\n")
        add_questions()
    else :
        print("\n***Invalid entry, input Yes or No***")
        reformatting(q, a)
        

def add_questions() :
    more_questions = input("Would you like to add a question? (Yes or No) ")
    if (more_questions == "yes" or more_questions == "Yes") :
        question = str(input("Enter your question: "))
        answer = str(input("Enter your answer: "))
        reformatting(question, answer)
    elif (more_questions == "no" or more_questions == "No") :
        print("\nYour Assignment:\n" + str(question_dictionary) + "\nEnd of Assignment")
    else :
        print("***Invalid entry, input Yes or No***")
        add_questions()


#variable definitions
question_count = 0
question_dictionary = dict()
add_questions()

