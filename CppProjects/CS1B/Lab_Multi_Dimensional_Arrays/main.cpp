#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std ;

double getPercentScore(const string, const string) ;
char getGradeScore(const double) ;

int main()
{
   ifstream scoresFile ;
   string filename ;
   cin >> filename ;
   scoresFile.open(filename) ;
   
   const int MAX_STUDENTS = 30 ;
   string answerKey ;
   string studentArray[MAX_STUDENTS][2] ;
   
   int count = 0 ;
   int rowIndex = 0 ;
   
   getline(scoresFile, answerKey, '\n') ;
   
   count = 0 ;
   while (!scoresFile.eof() && count < MAX_STUDENTS)
   {
      getline(scoresFile, studentArray[rowIndex][0], '\t') ;
      getline(scoresFile, studentArray[rowIndex][1], '\n') ;
      rowIndex++ ;
      count++ ;
   }
   
   int numStudents = count ;
   
   for (rowIndex = 0 ; rowIndex < numStudents-1 ; rowIndex++)
   {
      studentArray[rowIndex][1].at(20) = ' ' ;
   }
   
   int lastEntryLength = studentArray[numStudents-1][1].length() ;
   if (lastEntryLength == 21)
      studentArray[numStudents-1][1].at(20) = ' ' ;
   
   cout << setprecision(1) << fixed ; //formatting
   
   cout << "StudentID " << setw(20) << left << "Answers" << "  % Score " << "Grade" << endl ;
   
   double percentScore ;
   char grade ;
   float minScore = 100 ;
   string minID ;
   float maxScore = 0 ;
   string maxID ;
   float totalPercents = 0 ;
   int lastPosition ;
   if (numStudents > 1) 
   {
      for (rowIndex = 0 ; rowIndex < numStudents-1 ; rowIndex++)
      {
         percentScore = getPercentScore(studentArray[rowIndex][1], answerKey) ;
         if (minScore > percentScore)
         {
            minScore = percentScore ;
            minID = studentArray[rowIndex][0] ;
         }
         if (maxScore < percentScore)
         {
            maxScore = percentScore ;
            maxID = studentArray[rowIndex][0] ;
         }
         totalPercents += percentScore ;
         
         grade = getGradeScore(percentScore) ;
         
         cout << setw(10) << left << studentArray[rowIndex][0] << setw(20) << left << studentArray[rowIndex][1] <<
         setw(8) << right << percentScore << setw(6) << right << grade << endl; 
         
         lastPosition = rowIndex ;
      }
      
      lastPosition++ ;
      percentScore = getPercentScore(studentArray[lastPosition][1], answerKey) ;
      if (minScore > percentScore)
      {
         minScore = percentScore ;
         minID = studentArray[lastPosition][0] ;
      }  
      if (maxScore < percentScore)
      {
         maxScore = percentScore ;
         maxID = studentArray[lastPosition][0] ;
      }  
      totalPercents += percentScore ;
   
      grade = getGradeScore(percentScore) ;
      if (lastEntryLength == 21)
      {
         cout << setw(10) << left << studentArray[lastPosition][0] << setw(20) << left << studentArray[lastPosition][1] <<
         setw(8) << right << percentScore << setw(6) << right << grade << endl; 
      }
      else 
      {
         cout << setw(10) << left << studentArray[lastPosition][0] << setw(20) << left << studentArray[lastPosition][1] <<
         setw(9) << right << percentScore << setw(6) << right << grade << endl ; 
      }
   }
   else
   {
      percentScore = getPercentScore(studentArray[0][1], answerKey) ;
         
      minScore = percentScore ;
      minID = studentArray[0][0] ;
      maxScore = percentScore ;
      maxID = studentArray[0][0] ;
      
      totalPercents += percentScore ;
      
      grade = getGradeScore(percentScore) ;
         
      cout << setw(10) << left << studentArray[0][0] << setw(21) << left << studentArray[0][1] <<
      setw(8) << right << percentScore << setw(6) << right << grade << endl; 
   }
   
   float average = totalPercents/float(numStudents) ;
   
   cout << endl << endl ;
   cout << setw(14) << left << "Min score is" << 
   setw(4) << right << minScore << "% for Student ID " << minID << endl ;
   cout << setw(14) << left << "Max score is" << 
   setw(4) << right << maxScore << "% for Student ID " << maxID << endl ;
   cout << setw(14) << left << "Average   is" << 
   setw(4) << right << average << "%" << endl ;
   
   scoresFile.close() ;
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
