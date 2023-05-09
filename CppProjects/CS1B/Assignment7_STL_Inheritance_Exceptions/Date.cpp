// this file is called Date.cpp
/**********************************************************
 * AUTHOR        : George Eaton
 **********************************************************/

#include "Date.h"



/*****************************************************************
 * CONSTRUCTORS & DESTRUCTOR
 *****************************************************************/
Date::Date()
{

	dateMonth	= 0;
	dateDay		= 0;
	dateYear	= 0;

}

//uses private utility methods
Date::Date(unsigned short month,
	 unsigned short day,
	 unsigned short year)
{

	Date::SetDate(month, day, year);

}

Date::~Date()
{

}

/*****************************************************************
 * MUTATORS
 *****************************************************************/

// uses private utility methods
/*********************************************************************
 * SetDate
 * -------------------------------------------------------------------
 * sets the month, day, and year of the Date object
 * -------------------------------------------------------------------
 *********************************************************************/
void Date::SetDate(unsigned short month,
			 unsigned short day,
			 unsigned short year)
{

 if (ValidateDate(month,day,year) == true)
 {
	 dateMonth	= month;
	 dateDay	= day;
	 dateYear	= year;
 }
 else
 {
	 cout << "SetDate: Invalid date!\n";
 }


}


/*****************************************************************
 * ACCESSORS
 *****************************************************************/
// uses private utility methods

/*********************************************************************
 * GetDate
 * -------------------------------------------------------------------
 * gets the month, day, and year of the Date object by reference
 * -------------------------------------------------------------------
 *********************************************************************/
void Date::GetDate(unsigned short &month,
			 unsigned short &day,
			 unsigned short &year) const
{
	month = dateMonth;
	day = dateDay;
	year = dateYear;

}


/*********************************************************************
 * GetYear
 * -------------------------------------------------------------------
 * returns the year of the Date object
 * -------------------------------------------------------------------
 *********************************************************************/
unsigned short Date::GetYear()  const
{
	return dateYear;
}


/*********************************************************************
 * GetMonth
 * -------------------------------------------------------------------
 * returns the month of the Date object
 * -------------------------------------------------------------------
 *********************************************************************/
unsigned short Date::GetMonth() const
{
	return dateMonth;
}


/*********************************************************************
 * GetDay
 * -------------------------------------------------------------------
 * returns the day of the Date object
 * -------------------------------------------------------------------
 *********************************************************************/
unsigned short Date::GetDay()   const
{
	return dateDay;
}


/*********************************************************************
 * DisplayDate
 * -------------------------------------------------------------------
 * returns the date in MM/DD/YYYY format
 * -------------------------------------------------------------------
 *********************************************************************/
string Date::DisplayDate() const
{
	ostringstream date;

	date << setw(2) << dateMonth << "/" << dateDay << "/" << dateYear;

	return date.str();


}


/*****************************************************************
 * UTILITIES METHODS
 *****************************************************************/

/*********************************************************************
 * GetDaysInMonth
 * -------------------------------------------------------------------
 * returns the number of days in a month accounting for leap years
 * -------------------------------------------------------------------
 *********************************************************************/
unsigned short Date::GetDaysInMonth(unsigned short month,
							  unsigned short year) const
{
	unsigned short days;

	unsigned short daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};


	days = daysInMonth[month-1];

	//  if this is a leap year and the month of February, then days = 29
	if (Date::IsLeapYear(year) && month == 2)
			days = 29;

	return days;

}


/*********************************************************************
 * IsLeapYear
 * -------------------------------------------------------------------
 * returns true if year is a leap year
 * -------------------------------------------------------------------
 *********************************************************************/
bool Date::IsLeapYear(unsigned short year) const
{

	return ( (year%4 == 0) && !(year%100 == 0) ) ||
		   ( (year%4 == 0) && (year%100) && (year%400) ) ? true : false;
}


/*****************************************************************
 * VALIDATE METHODS
 *****************************************************************/


/*********************************************************************
 * ValidateMonth
 * -------------------------------------------------------------------
 * returns true if month is valid
 * -------------------------------------------------------------------
 *********************************************************************/
bool Date::ValidateMonth(unsigned short month) const
{

	return ( month >= 1 && month <= 12 ) ? true : false;

}


/*********************************************************************
 * ValidateDay
 * -------------------------------------------------------------------
 * returns true if day is valid, accounting for leap years
 * -------------------------------------------------------------------
 *********************************************************************/
bool Date::ValidateDay(unsigned short month,
				 	   unsigned short day,
					   unsigned short year) const
{

	return (day <= Date::GetDaysInMonth(month,year)) ? true: false;

}


/*********************************************************************
 * ValidateYear
 * -------------------------------------------------------------------
 * returns true if year is valid
 * -------------------------------------------------------------------
 *********************************************************************/
bool Date::ValidateYear(unsigned short year) const
{
    time_t now = time(0);   // get time now
    tm *local_time = localtime(&now);

	return ( year >= 1900 && ( year <= local_time->tm_year + 1900) ) ? true : false;

}


/*********************************************************************
 * ValidateDate
 * -------------------------------------------------------------------
 * returns true if date is valid, taking leap years into consideration
 * -------------------------------------------------------------------
 *********************************************************************/
bool Date::ValidateDate(unsigned short month,
				  unsigned short day,
				  unsigned short year) const
{

    time_t now = time(0);   // get time now
    tm *local_time = localtime(&now);

	bool valid = true;

	// check that the year is valid
	if (ValidateYear(year) == false)
	{
		cout << "Invalid year " << year << endl;
		valid = false;
	}

	// check that the month is valid
	if (ValidateMonth(month) == false)
	{
		cout << "Invalid month " << month << endl;
		valid = false;
	}

	// check that the day if valid
	if (ValidateDay(month,day,year) == false)
	{
		cout << "Invalid day " << day << endl;
		valid = false;
	}

	// check against today's date and warn if a future date
	bool future = false;
	if (year > local_time->tm_year + 1900)
		future = true;
	if (year == local_time->tm_year + 1900)
	{
		if (month > local_time->tm_mon + 1 )
		{
			future = true;
		}
		if (month == local_time->tm_mon + 1
			&& day > local_time->tm_mday)
			future = true;

	}

	// valid date, but in the future
    if ( future == true && valid == true )
    {
      	cout << "Warning! Date " << month << "/" << day << "/"  << year
      		 << " is later this year\n";
    }

	return valid;

}

