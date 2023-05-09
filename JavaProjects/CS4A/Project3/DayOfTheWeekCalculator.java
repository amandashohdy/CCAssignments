/*****************************
 * AUTHOR :  Amanda Shohdy
 * DATE   :  14 March 2023
 *****************************/

import java.util.Scanner ;

/******************************************************************************************************
 * DAY OF THE WEEK CALCULATOR
 * 
 * This program will calculate the day of the week of a given date. The date will be input in the 
 * MM DD YYYY format and be compared to a reference date to find the day of the week. The program will
 * terminate when it encounters a 0 input. 
 * 
 * INPUT
 *     month (int)
 *     day   (int)
 *     year  (int)
 * OUTPUT
 *     The day of the week given a date
 ******************************************************************************************************/
public class Exam3
{
	public static void main(String[] args)
	{
		System.out.println("\n") ;
		System.out.println("*******************") ;
		System.out.println("** Amanda Shohdy **") ;
		System.out.println("** 14 March 2023 **") ;
		System.out.println("**    1151978    **") ;
		System.out.println("*******************") ;
		System.out.println("\n") ;
		Scanner input = new Scanner(System.in) ;
		System.out.println("Welcome to the Day Of Week calculator. This awesome program will tell you" + 
		" what day of the week you were born on!") ;
		System.out.println("The program will allow you to find the day of the week for multiple " + 
		"dates. When you want to exit the program enter a 0 for the month, day, or year.") ;
		System.out.println() ;

		int month ;
		int day ;
		int year ;
		do
		{
			System.out.println("Enter a date in MM DD YYYY format (example: 11 1 1970 or 6 21 2011) ") ;
			month = input.nextInt() ;
			day = input.nextInt() ;
			year = input.nextInt() ;
			if (month != 0 && day != 0 && year != 0) 
				System.out.println("The date you entered was a " + calculation(month, day, year)) ;
			System.out.println() ;
		} while (month != 0 && day != 0 && year != 0) ;   // when 0 is encountered, terminate the loop

		System.out.println("THANK YOU FOR USING THE DAY OF WEEK CALCULATOR") ;
	}

	/***********************************************************************************
	 * Function calculation(int userMonth, int userDay, int userYear)
	 *    This function calculates the amount of days between the reference date - 
	 * January 1, 2000 - and the date passed into the function. The remainder of the 
	 * number of days that have passed and 7 is used to determine what day of the week
	 * the input date was. 
	 * 
	 * PRE-CONDITIONS
	 *    userMonth (int)
	 *    userDay   (int)
	 *    userYear  (int)
	 * POST-CONDITIONS
	 *    Based on the amount of days between the passed date and the reference date, the
	 * day of the week of the passed date is returned.  
	 ***********************************************************************************/
	public static String calculation(int userMonth, int userDay, int userYear)
	{
		// the reference date is 1 1 2000
		int refYear = 2000 ;
		int daysBetween = 0 ;

		// IF the input year comes after the reference year, iterate through each year
		// and add the amount of days in that year until the input year is reached
		if (refYear < userYear)
		{
			for (int currYear = refYear ; currYear < userYear ; currYear++)
			{
				// year calculation
				if ((currYear % 4 == 0 && currYear % 100 != 0) || currYear % 400 == 0)
					daysBetween += 366 ;    // if the year is a leap year
				else 
					daysBetween += 365 ;
			}

			// ONCE the days that have passed based on the years between has been calculated, 
			// the amount of days based on what month it is can be calculation from January 1
			// of the input year
			for (int currMonth = 1 ; currMonth < userMonth ; currMonth++)
			{
				// January, March, May, July, August, October, December
				if (currMonth == 1 || currMonth == 3 || currMonth == 5 || currMonth == 7 ||
					currMonth == 8 || currMonth == 10 || currMonth == 12)
					daysBetween += 31 ;
				
				// April, June, September, November
				else if (currMonth == 4 || currMonth == 6 || currMonth == 9 || currMonth == 11)
					daysBetween += 30 ;

				// February of a leap year
				else if ((userYear % 4 == 0 && userYear % 10 != 0) || userYear % 400 == 0)
					daysBetween += 29 ;

				// February of an ordinary year
				else 
					daysBetween += 28 ;
			}

			// NOW that the days passed based on the years between has been calculated and 
			// the days that have passed from January 1 of the input year to the first day of
			// the current month have been calculated, all that's left is to calculate the 
			// number of days from the first of the input month to the input day
			daysBetween += (--userDay) ;

			int remainder = daysBetween % 7 ;

			switch(remainder)    // return a date based on the remainder
			{
				case 0: return "Saturday" ;
				case 1: return "Sunday" ;
				case 2: return "Monday" ;
				case 3: return "Tuesday" ;
				case 4: return "Wednesday" ;
				case 5: return "Thursday" ;
				case 6: return "Friday" ;
			}
			return "Invalid Date" ;
		}

		// IF the reference year comes after the input year, calculate the amount of days
		// left of the input year
		else if (refYear > userYear)
		{
			// FIRST calculate the amount of days left of the input month

			// January, March, May, July, August, October, December
			if (userMonth == 1 || userMonth == 3 || userMonth == 5 || userMonth == 7 ||
			    userMonth == 8 || userMonth == 10 || userMonth == 12)
				daysBetween += (31 - userDay) ;

			// April, June, September, November
			else if (userMonth == 4 || userMonth == 6 || userMonth == 9 || userMonth == 11)
				daysBetween += (30 - userDay) ;

			// February of a leap year
			else if ((userYear % 4 == 0 && userYear % 10 != 0 || userYear % 400 == 0))
			{
				daysBetween += (29 - userDay) ;
			}

			// February of an ordinary year
			else daysBetween += (28 - userDay) ;

			// NEXT calculate the amount of days left of the year based off of the month
			for (int currMonth = userMonth + 1 ; currMonth <= 12 ; currMonth++)
			{
				// January, March, May, July, August, October, December
				if (currMonth == 1 || currMonth == 3 || currMonth == 5 || currMonth == 7 ||
				currMonth == 8 || currMonth == 10 || currMonth == 12)
					daysBetween += 31 ;

				// April, June, September, November
				else if (currMonth == 4 || currMonth == 6 || currMonth == 9 || currMonth == 11)
					daysBetween += 30 ;

				// February of a leap year
				else if ((userYear % 4 == 0 && userYear % 10 != 0 || userYear % 400 == 0))
					daysBetween += 29 ;

				// February of an ordinary year
				else daysBetween += 28 ;
			}

			// LAST calculate how many days are left based on the years that will pass
			for (int currYear = userYear + 1 ; currYear < refYear ; currYear++)
			{
				// year calculation
				if ((currYear % 4 == 0 && currYear % 100 != 0) || currYear % 400 == 0)
					daysBetween += 366 ;    // if the year is a leap year
				else
					daysBetween += 365 ;
			}
			
			int remainder = daysBetween % 7 ;

			switch(remainder)
			{
				case 6: return "Saturday" ;
				case 5: return "Sunday" ;
				case 4: return "Monday" ;
				case 3: return "Tuesday" ;
				case 2: return "Wednesday" ;
				case 1: return "Thursday" ;
				case 0: return "Friday" ;
			}
			return "Invalid Date" ;
		}

		// IF the input year is the reference year, calculate the amount of days based on months
		else 
		{
			for (int currMonth = 1 ; currMonth < userMonth ; currMonth++)
			{
				// January, March, May, July, August, October, December
				if (currMonth == 1 || currMonth == 3 || currMonth == 5 || currMonth == 7 ||
					currMonth == 8 || currMonth == 10 || currMonth == 12)
					daysBetween += 31 ;
				
				// April, June, September, November
				else if (currMonth == 4 || currMonth == 6 || currMonth == 9 || currMonth == 11)
					daysBetween += 30 ;

				// February of a leap year
				else if ((userYear % 4 == 0 && userYear % 10 != 0) || userYear % 400 == 0)
					daysBetween += 29 ;

				// February of an ordinary year
				else 
					daysBetween += 28 ;
			}
			// CALCULATE the amount of days that have passed in the input month
			daysBetween += (--userDay) ;

			int remainder = daysBetween % 7 ;

			switch(remainder)
			{
				case 0: return "Saturday" ;
				case 1: return "Sunday" ;
				case 2: return "Monday" ;
				case 3: return "Tuesday" ;
				case 4: return "Wednesday" ;
				case 5: return "Thursday" ;
				case 6: return "Friday" ;
			}
			return "Invalid Date" ;
		}
	}
}
