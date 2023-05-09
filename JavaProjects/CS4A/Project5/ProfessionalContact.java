/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : EXAM 5
 * CLASS        : CS4A
 * SECTION      : TTH 6:00-6:50p
 * DUE DATE     : 4 May 2023
**********************************/

package Exam5 ;

public class ProfessionalContact extends Contact
{
	private String company ;     // contact's company name
	private String occupation ;  // contact's occupation

	public ProfessionalContact()
	{
		super() ;
		company = "" ;
		occupation = "" ;
	}

	public void setCompany(String companyName)
	{
		company = companyName ;
	}
	public String getCompany()
	{
		return company ;
	}

	public void setOccupation(String job) 
	{
		occupation = job ;
	}
	public String getOccupation()
	{
		return occupation ;
	}

	@Override
	public void printContact()
	{
		super.printContact() ;
		System.out.println("C: " + company) ;
		System.out.println("O: " + occupation) ;
	}
}

/*********************************************************************
 * ProfessionalContact Class
 *    The ProfessionalContact class extends the Contact abstract class 
 * and manages 2 attribute2: company and occupation. 
 *********************************************************************/

	/************************************************************************
	 * Method ProfessionalContact()
	 *    This constructor sets class attributes to default values
	 * POST-CONDITION
	 *    All attributes are set to empty Strings
	 ************************************************************************/

	/*****************************************************************
	 * Method setCompany()
	 *    This method sets the company attribute
	 * PRE-CONDITION
	 *    companyName (String) - contact's company
	 *****************************************************************/

	/*****************************************************************
	 * Method getCompany()
	 *    This method returns the company attribute 
	 * POST-CONDITION
	 *    company (String) is returned
	 *****************************************************************/

	/*****************************************************************
	 * Method setOccupation()
	 *    This method sets the occupation attribute
	 * PRE-CONDITION
	 *    job (String) - contact's occupation
	 *****************************************************************/

	/*****************************************************************
	 * Method getOccupation()
	 *    This method returns the occupation attribute 
	 * POST-CONDITION
	 *    occupation (String) is returned
	 *****************************************************************/

	/*****************************************************************
	 * Method printContact()
	 *    This method outputs the contact's company name and 
	 * occupation
	 *****************************************************************/