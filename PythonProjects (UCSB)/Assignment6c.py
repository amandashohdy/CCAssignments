# Amanda Shohdy
# 12/3/2021


'''Question 1'''
def count_dashes(line_text) :
    num_dashes = len(line_text)
    print("There are {} dashes in '{}'.".format(num_dashes, line_text))
    return num_dashes

dashes = input("Enter dashes: ")
count_dashes(dashes)


'''Question 2'''
def get_letter_grade(score, cutoffs) :
    if (score >= cutoffs[0]) :
        return "A"
    if (score >= cutoffs[1]) :
        return "A-"
    if (score >= cutoffs[2]) :
        return "B+"
    if (score >= cutoffs[3]) :
        return "B"
    if (score >= cutoffs[4]) :
        return "B-"
    else :
        return None


'''Question 3'''
def grade_change(grades_list, cutoffs_list) :
    sum_ = 0
    sum__ = 0
    grade = tuple()
    for i in range(len(grades_list)) :
        sum_ = sum_ + grades_list[i]
        average = sum_ / len(grades_list)
    grade = (average, get_letter_grade(average, cutoffs_list))
    for i in range(len(grades_list)) :
        if (grades_list[i] < 80) :
            grades_list[i] = grades_list[i] + 2
        sum__ = sum__ + grades_list[i]
        average_ = sum__ / len(grades_list)
    new_grade = (average_, get_letter_grade(average_, cutoffs_list))
    return tuple(grade + new_grade)



if __name__ == "__main__":
    print(get_letter_grade(97, [93, 90, 87, 83, 80]))
    print(get_letter_grade(93, [97, 90, 87, 83, 80]))
    print(grade_change([80, 73, 77, 85, 92], [97, 90, 87, 83, 80]))
