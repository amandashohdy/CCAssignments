/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : Project 5
 * CLASS        : CS4A
 * SECTION      : TTH 6:00-6:50p
 * DUE DATE     : 4 May 2023
**********************************/

package Project5 ;

public abstract class Contact
{
	private String firstName ;        // contact's first name
	private String lastName ;         // contact's last name
	private String telephoneNumber ;  // contact's telephone number
	private String email ;            // contact's email

	public Contact()
	{
		firstName = "" ;
		lastName = "" ;
		telephoneNumber = "" ;
		email = "" ;
	}

	public void setFirstName(String first) 
	{
		firstName = first ;
	}
	public String getFirstName()
	{
		return firstName ;
	}

	public void setLastName(String last) 
	{
		lastName = last ;
	}
	public String getLastName()
	{
		return lastName ;
	}

	public void setTelephoneNumber(String number)
	{
		telephoneNumber = number ;
	}
	public String getTelephoneNumber()
	{
		return telephoneNumber ;
	}

	public void setEmail(String e)
	{
		email = e ;
	}
	public String getEmail()
	{
		return email ;
	}

	public void printContact() 
	{
		System.out.println(firstName + " " + lastName) ;
		System.out.println("T: " + telephoneNumber) ;
		System.out.println("E: " + email) ;
	}
}

/****************************************************************************
 * Contact Abstract Class
 *    The Contact Abstract class represents the base Contact object and 
 * manages 4 attributes: firstName, lastName, telephoneNumber, and email.
 ****************************************************************************/

	/************************************************************************
	 * Method Contact()
	 *    This constructor sets class attributes to default values
	 * POST-CONDITION
	 *    All attributes are set to empty Strings
	 ************************************************************************/

	/************************************************************************
	 * Method setFirstName()
	 *    This method sets the firstName attribute
	 * PRE-CONDITION
	 *    first (String) - contact's first name
	 ************************************************************************/
	
	/************************************************************************
	 * Method getFirstName()
	 *    This method returns the firstName attribute
	 * POST-CONDITION
	 *    firstName (String) is returned
	 ************************************************************************/
	
	/************************************************************************
	 * Method setLastName()
	 *    This method sets the lastName attribute
	 * PRE-CONDITION
	 *    last (String) - contact's last name
	 ************************************************************************/
	
	 /************************************************************************
	 * Method getLastName()
	 *    This method returns the lastName attribute
	 * POST-CONDITION
	 *    lastName (String) is returned
	 ************************************************************************/
	
	/************************************************************************
	 * Method setTelephoneNumber()
	 *    This method sets the telephoneNumber attribute
	 * PRE-CONDITION
	 *    number (String) - contact's telephone number
	 ************************************************************************/
	
	/************************************************************************
	 * Method getTelephoneNumber()
	 *    This method returns the telephoneNumber attribute
	 * POST-CONDITION
	 *    telephoneNumber (String) is returned
	 ************************************************************************/
	
	/************************************************************************
	 * Method setEmail()
	 *    This method sets the email attribute
	 * PRE-CONDITION
	 *    e (String) - contact's email
	 ************************************************************************/

	/************************************************************************
	 * Method getEmail()
	 *    This method returns the email attribute
	 * POST-CONDITION
	 *    email (String) is returned
	 ************************************************************************/
		
	/************************************************************************
	 * Method printContact()
	 *    This method outputs the contact's first name, last name, telephone
	 * number, and email
	 ************************************************************************/
