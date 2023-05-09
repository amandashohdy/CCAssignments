/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : EXAM 5
 * CLASS        : CS4A
 * SECTION      : TTH 6:00-6:50p
 * DUE DATE     : 4 May 2023
**********************************/

package Exam5 ;

public class PersonalContact extends Contact
{
	private String relation ;    // users relationship to the contact

	public PersonalContact()
	{
		super() ;
		relation = "" ;
	}

	public void setRelation(String relationship) 
	{
		relation = relationship ;
	}
	public String getRelation()
	{
		return relation ;
	}

	@Override
	public void printContact()
	{
		super.printContact() ;
		System.out.println("R: " + relation) ;
	}
}

/*********************************************************************
 * PersonalContact Class
 *    The PersonalContact class extends the Contact abstract class 
 * and manages 1 attribute: relation. 
 *********************************************************************/

	/************************************************************************
	 * Method PersonalContact()
	 *    This constructor sets class attributes to default values
	 * POST-CONDITION
	 *    All attributes are set to empty Strings
	 ************************************************************************/

	/*****************************************************************
	 * Method setRelation()
	 *    This method sets the relation attribute
	 * PRE-CONDITION
	 *    relationship (String) - relationship to contact
	 *****************************************************************/

	/*****************************************************************
	 * Method getRelation()
	 *    This method returns the relation attribute 
	 * POST-CONDITION
	 *    relation (String) is returned
	 *****************************************************************/

	/*****************************************************************
	 * Method printContact()
	 *    This method outputs the contact's relationship to the user
	 *****************************************************************/
