''' 
1. Rainfall Statistics
    Write a program that lets the user enter the total rainfall for each of 12 months into a list. The program should calculate and display the total rainfall for the year, the average monthly rainfall, and the months with the highest and lowest amounts. 
    Input Validation: Do not accept negative numbers for montly rainfall figures. 
    Use at least one function with a return statement and include a functions file.
'''
#OUTLINE
def calculations(rainfallList):
  #use a loop to sum up all the entries in the rainfall list
  #calculate the average monthly rainfall
  #use a loop to find the index of the month with the highest and lowest rainfalls
  return  # a tuple containing all 4 statistics in order

if __name__ == "__main__":
  rainfall = []
  for i in range(12):
    rain = int(input("Enter rainfall for month " + str(i+1) + ": "))
    #adds rain to the end of rainfall
  #use a loop to take 12 inputs for monthly rainfall and append them to the rainfall list
  #call the calculations functions and pass in the rainfall list (assign it to a variable)
  #print out the statistics using the positions in the returned tuple


'''
2. Driver's License Exam
    The local Driver's License Office has asked you to write a program that grades the written portion of the driver's license exam. The exam has 20 multiple choice questions. Here are the correct answers. 

1. B         6. A        11. B        16. C
2. D         7. B        12. C        17. C
3. A         8. A        13. D        18. B
4. A         9. C        14. A        19. D
5. C        10. D        15. D        20. A

    Your program should store the correct answers shown above in an array. It should ask the user to enter the student's answers for each of the 20 questions, and the answers should be stored in another array. After the student's answers have been entered, the program should display a message indicating whether the student passed or failed the exam. (A student must correctly answer 15 of the 20 questions to pass the exam.) If should then display the total number of correctly answered questions. 
    Use at least on function and one file.
    Input Validation: Only accept the letters A, B, C, and D as answers
'''
#OUTLINE
def calculateGrade(studentGrades):
  correctGrades = ['B', 'D', 'A', 'A', 'C']
  #loop through the students and the correct answers and keep count of how many of the student's answers are the same as the correct answer.
  #return the number of correct answers

if __name__ == "__main__":
  studentAnswers = []
  #use a loop and input statements to add student answers to the student answers list
  #call the grading function and pass in the student answers list (assign it to a variable)
  #if else to print pass/fail message and score out of 20

  
'''
3. Lottery (warm up)
    Write a program that stimulates a lottery. The program should have an list of five integers named lottery, and should generate a random number in the range of 0 through 9 for each element in the list. The user should enter five digits which should be stored in a list named user. The program is to compare the corresponding elements in the two lists and keep a count of the digits that match. For example, the following shoes the lottery list and the user list with sample numbers stored in each. There are two matching digits. 
    lottery list:   7  4  9  1  3
    user list   :   4  2  9  7  3

    The program should display the random numbers stored in the lottery list and the number of matching digits. If all the digits match, display a message that the user is the grand prize winner.
'''
