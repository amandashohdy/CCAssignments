// this file is called Date.h
/**********************************************************
 * AUTHOR        : George Eaton
 **********************************************************/

#ifndef DATE_H_
#define DATE_H_


#include <iostream>
#include <iomanip>
#include <sstream>
#include <ctime>		// for date/time function

using namespace std;

class Date {

public:
	/*****************************************************************
	 * CONSTRUCTORS & DESTRUCTOR
	 *****************************************************************/
	Date();

	//uses private utility methods
	Date(unsigned short month,
		 unsigned short day,
		 unsigned short year);

	~Date();

	/*****************************************************************
	 * MUTATORS
	 *****************************************************************/
	// uses private utility methods
	void SetDate(unsigned short month,
			     unsigned short day,
				 unsigned short year);


	/*****************************************************************
	 * ACCESSORS
	 *****************************************************************/
	// uses private utility methods
	void GetDate(unsigned short &month,
			     unsigned short &day,
				 unsigned short &year) const;

	unsigned short GetYear()  const;
	unsigned short GetMonth() const;
	unsigned short GetDay()   const;


	// Displays in MM/DD/YYYY format
	string DisplayDate() const;

private:
	/*****************************************************************
	 * UTILITIES METHODS
	 *****************************************************************/
	unsigned short GetDaysInMonth(unsigned short month,
								  unsigned short year) const;

	bool IsLeapYear(unsigned short year) const;


	/*****************************************************************
	 * VALIDATE METHODS
	 *****************************************************************/

	// Validates the month
	bool ValidateMonth(unsigned short month) const;

	// Checks if a day is valid takes leap year into consideration
	bool ValidateDay(unsigned short month,
					 unsigned short day,
					 unsigned short year) const;

	// Validates the year is between 1900 and the current year
	bool ValidateYear(unsigned short year) const;

	// Uses methods above to validate a given date - check against current day
	bool ValidateDate(unsigned short month,
					  unsigned short day,
					  unsigned short year) const;


	/*****************************************************************
	 * VALIDATE METHODS
	 *****************************************************************/
	unsigned short dateMonth;
	unsigned short dateDay;
	unsigned short dateYear;


};

#endif /* DATE_H_ */
