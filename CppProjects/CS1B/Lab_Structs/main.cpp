#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std ;

struct data
{
	string idNumber ;
	string answers ;
	double percentScore ;
	char letterScore ;
};

void bubbleSort(data [], const int) ;
double getPercentScore(const string, const string) ;
char getGradeScore(const double) ;
void outputResults(const data [], const int) ;

int main()
{
	ifstream scoresFile ;
	string filename ;
	cin >> filename ;
	scoresFile.open(filename) ;
	while(!scoresFile)
	{
	   cout << "There was an error opening this file, try again." << endl ;
	   cin >> filename ;
	   scoresFile.open(filename) ;
	}

	const int MAX_STUDENTS = 30 ;
	string answerKey ;
	data studentArray[MAX_STUDENTS] ;

	int count ;
	int rowIndex ;
   
	getline(scoresFile, answerKey, '\n') ;

	count = 0 ;
	rowIndex = 0 ;

	while (!scoresFile.eof() && count < MAX_STUDENTS)
	{
		getline(scoresFile, studentArray[rowIndex].idNumber, '\t') ;
		getline(scoresFile, studentArray[rowIndex].answers, '\n') ;
		rowIndex++ ;
		count++ ;
	}

	int numStudents = count ;
	bubbleSort(studentArray, numStudents) ;

	for (rowIndex = 0 ; rowIndex < numStudents ; rowIndex++)
	{
	   if (studentArray[rowIndex].answers.length() == 21)
	      studentArray[rowIndex].answers.at(20) = ' ' ;
	   else
	      studentArray[rowIndex].answers.append(" ") ;
		studentArray[rowIndex].percentScore = getPercentScore(studentArray[rowIndex].answers, answerKey) ;
		studentArray[rowIndex].letterScore = getGradeScore(studentArray[rowIndex].percentScore) ;
	}
	outputResults(studentArray, numStudents) ;

	float minScore = studentArray[0].percentScore ;
	string minID = studentArray[0].idNumber ;
	float maxScore = studentArray[0].percentScore ;
	string maxID = studentArray[0].idNumber ;
	float totalPercents = 0 ;

	for (rowIndex = 0 ; rowIndex < numStudents ; rowIndex++)
	{
		if (studentArray[rowIndex].percentScore < minScore)
		{
			minScore = studentArray[rowIndex].percentScore ;
			minID = studentArray[rowIndex].idNumber ;
		}
		if (studentArray[rowIndex].percentScore > maxScore)
		{
			maxScore = studentArray[rowIndex].percentScore ;
			maxID = studentArray[rowIndex].idNumber ;
		}
		totalPercents += studentArray[rowIndex].percentScore ;
	}
	double average = totalPercents / numStudents ;

	cout << endl << endl ;
	cout << setw(14) << left << "Min score is" << setw(4) << right << minScore << "% for Student ID " << minID << endl ;
	cout << "Max score is  " << maxScore << "% for Student ID " << maxID << endl ;
	cout << "Average   is  " << average << "%" << endl ;
}

void bubbleSort(data ARRAY[], const int SIZE)
{
	bool swap ;
	data temp ;
	int index ;
	do
	{
		swap = false ;
		for (index = 0 ; index < SIZE-1 ; index++)
		{
			if ((ARRAY[index].idNumber > ARRAY[index+1].idNumber) &&
				(ARRAY[index].idNumber.length() > 1) && (ARRAY[index+1].idNumber.length() > 1))
			{
				temp = ARRAY[index] ;
				ARRAY[index] = ARRAY[index+1] ;
				ARRAY[index+1] = temp ;
				swap = true ;
			}
		}
	} while (swap) ;
}

double getPercentScore(const string ANSWERS, const string KEY)
{
	float totalPoints = 0;
	float maxPoints = 40 ;
	int length = 20 ;
	int pos ;

	for (pos = 0 ; pos < length ; pos++)
	{
	   if (ANSWERS.at(pos) == KEY.at(pos))
	      totalPoints += 2 ;
	   else if (ANSWERS.at(pos) != '_')
	      totalPoints -= 1 ;
	}
	double percent = (totalPoints/maxPoints) * 100.0 ;
	if (percent < 0)
	   percent = 0 ;

	return percent ;
}

char getGradeScore(const double PERCENT)
{
	char grade ;
	if (PERCENT > 89)
		grade = 'A' ;
	else if (PERCENT > 79)
		grade = 'B' ;
	else if (PERCENT > 69)
		grade = 'C' ;
	else if (PERCENT > 59)
		grade = 'D' ;
	else
		grade = 'F' ;

	return grade ;
}

void outputResults(const data ARRAY[], const int SIZE)
{
	cout << setprecision(1) << fixed ;
	cout << "StudentID " << setw(20) << left << "Answers" << "  % Score " << "Grade"
	<< endl ;

	for (int rowIndex = 0 ; rowIndex < SIZE ; rowIndex++)
	{
		cout << setw(10) << left << ARRAY[rowIndex].idNumber << setw(20) << left <<
		ARRAY[rowIndex].answers << setw(8) << right << ARRAY[rowIndex].percentScore <<
		setw(6) << right << ARRAY[rowIndex].letterScore << endl ;
	}
}


