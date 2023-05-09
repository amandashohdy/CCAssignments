/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : Project 5
 * CLASS        : CS4A
 * SECTION      : TTH 6:00-6:50p
 * DUE DATE     : 4 May 2023
**********************************/

package Project5 ;

import java.util.Scanner ;
import java.util.ArrayList ;

public class AddressBook {
	/*******************************************************************************************
	 * Main Function
	 *    This function prompts the user to make menu selections to edit their address book: add
	 * a personal contact, add a professional contact, search for a contact, delete a contact, 
	 * or print their address book. The user is prompted to take actions on their address book 
	 * until they select the menu option to quit. 
	 * 
	 * INPUT
	 *    selection (String) - the chosen menu option
	 *    first     (String) - first name of the contact being searched for or deleted
	 *    last      (String) - last name of the contact being searched for or deleted
	 * OUTPUT
	 *    The status of whatever menu selection was chosen is output. If menu selection 3 is 
	 * chosen and the contact is found, the contact is output. If menu selection 5 is chosen,
	 * the address book is output. If an invalid menu selections is chosen, an error message is
	 * output. 
	 *******************************************************************************************/
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in) ;
		String selection ;    // menu selection
		ArrayList<Contact> contacts = new ArrayList<Contact>() ; // contents of the address book
		do
		{
			// Output the menu and take in the selection
			System.out.println("\n\n\n----MENU----") ;
			System.out.println("1. Add a Personal Contact") ;
			System.out.println("2. Add a Professional Contact") ;
			System.out.println("3. Search for Contact") ;
			System.out.println("4. Delete Contact") ;
			System.out.println("5. Print Address Book") ;
			System.out.println("6. Exit\n\n\n") ;
			System.out.println("Please enter a number (1-6):") ;
			selection = input.next() ;

			// Execute menu selection
			switch(selection)
			{
				case "1" : 
				{ 
					System.out.println("Enter firstName lastName telephone email relation") ;
					PersonalContact newContact = new PersonalContact() ;
					// set new contact information
					newContact.setFirstName(input.next()) ;
					newContact.setLastName(input.next()) ;
					newContact.setTelephoneNumber(input.next()) ;
					newContact.setEmail(input.next()) ;
					newContact.setRelation(input.next()) ;
					// add new contact to the address book
					contacts.add(newContact) ;
					System.out.println("Personal Contact Added!") ;
					break ;
				}
				case "2" :
				{
					System.out.println("Enter firstName lastName telephone email occupation company") ;
					ProfessionalContact newContact = new ProfessionalContact() ;
					// set new contact information
					newContact.setFirstName(input.next()) ;
					newContact.setLastName(input.next()) ;
					newContact.setTelephoneNumber(input.next()) ;
					newContact.setEmail(input.next()) ;
					newContact.setOccupation(input.next()) ;
					newContact.setCompany(input.next()) ;
					// add new contact to the address book
					contacts.add(newContact) ;
					System.out.println("Professional Contact Added!") ;
					break ;
				}
				case "3" : 
				{
					System.out.println("Enter firstName lastName") ;
					boolean found = false ;
					String first = input.next() ;
					String last = input.next() ;
					for (int i = 0 ; i < contacts.size() ; i++)
					{   // if the contact's first and last name match the input first and last name
						if ((contacts.get(i)).getFirstName().equalsIgnoreCase(first) && 
						    (contacts.get(i)).getLastName().equalsIgnoreCase(last))
						{
							System.out.println("Contact Found:") ;
							(contacts.get(i)).printContact() ;
							found = true ;
						}
					}
					// if the contact was not found
					if (!found) System.out.println("Contact Not Found!") ;
					break ;
				}
				case "4" : 
				{
					System.out.println("Enter firstName lastName") ;
					boolean found = false ;
					String first = input.next() ;
					String last = input.next() ;
					for (int i = 0 ; i < contacts.size() ; i++)
					{   // if the contact's first and last name match the input first and last name
						if ((contacts.get(i)).getFirstName().equalsIgnoreCase(first) && 
						    (contacts.get(i)).getLastName().equalsIgnoreCase(last))
						{
							contacts.remove(i) ;
							System.out.println("Contact Was Deleted") ;
							found = true ;
						}
					}
					// if the contact was not found
					if (!found) System.out.println("Contact Not Found!") ;
					break ;
				}
				case "5" : 
				{
					System.out.println("--Address Book--") ;
					// print contact information for each contact in the address book
					for (int i = 0 ; i < contacts.size() ; i++)
					{
						(contacts.get(i)).printContact() ;
						System.out.println() ;
					}
					System.out.println("--END--") ;
					break ;
				}
				case "6" : 
				{
					System.out.println("Good Bye!") ;
					break ;
				}
				default :
				{
					// if the selection was not a digit
					if (!(Character.isDigit(selection.charAt(0))))
					{
						System.out.println("YOU DID NOT ENTER AN INTEGER - TRY AGAIN!") ;
					}
					// if the selection was a digit outside the valid range
					else if (Integer.parseInt(selection) < 1 || Integer.parseInt(selection) > 6)
					{
						System.out.println("YOU DID NOT ENTER AN INTEGER BETWEEN 1 - 6. TRY AGAIN!") ;
					}
				}
			}
		} while (!(selection.equals("6"))) ;   // exit menu selection
	}
}
