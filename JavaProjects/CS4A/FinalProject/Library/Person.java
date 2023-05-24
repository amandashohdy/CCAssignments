/**********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : Course Schedular 
 * CLASS        : CS4A
 * SECTION      : TTH 6:00-6:50p
 * DUE DATE     : 23 May 2023
***********************************/

package Library ;

/**
 * Person Abstract Class
 *      The Person Abstract Class manages 10 attributes: firstName, middleName, 
 * lastName, email, telephoneNumber, streetAddress, city, state, zipCode, 
 * and uniqueID.
 */
public abstract class Person
{
    private String firstName ;          // first name
    private String middleName ;         // middle name
    private String lastName ;           // last name

    private String email ;              // email
    private String telephoneNumber ;    // telephone number

    private String streetAddress ;      // street
    private String city ;               // city
    private String state ;              // state
    private int zipCode ;               // zip code

    private String uniqueID ;           // ID 

    /**
     * Constructor
     *      This contructor initializes class attributes to passed values.
     * 
     * 
     * @param first (String) - first name
     * @param middle (String) - middle name
     * @param last (String) - last name
     * @param e (String) - email
     * @param number (String) - phone number
     * @param s (String) - street
     * @param c (String) - city
     * @param st (String) - state
     * @param zip (int) - zip code
     */
    public Person(String first, String middle, String last, String e, String number,
                  String s, String c, String st, int zip)
    {
        firstName = first ;
        middleName = middle ;
        lastName = last ;

        email = e ;
        telephoneNumber = number ;

        streetAddress = s ;
        city = c ;
        state = st ;
        zipCode = zip ;
    }

    /**
     * Mutator
     *      This mutator sets the uniqueID attribute. 
     * @param id (String)
     */
    public void setID(String id) { uniqueID = id ; }

    /**
     * Accessor
     *      This accessor returns the firstName attribute.
     * @return firstName (String)
     */
    public String getFirstName() { return firstName ; }

    /**
     * Accessor
     *      This accessor returns the middleName attribute.
     * @return middleName (String)
     */
    public String getMiddleName() { return middleName ; }

    /**
     * Accessor
     *      The accessor returns the lastName attribute.
     * @return lastName (String)
     */
    public String getLastName() { return lastName ; }

    /**
     * Accessor
     *      This accessor returns the email attribute.
     * @return email (String)
     */
    public String getEmail() { return email ; }

    /** 
     * Accessor
     *      This accessor returns the telephoneNumber attribute.
     * @return telephoneNumber (String)
     */
    public String getNumber() { return telephoneNumber ; }

    /**
     * Accessor 
     *      This accessor returns the street address attribute with 
     * all '-' substituted for spaces. 
     * @return street (String)
     */
    public String getStreetAddress()
    {
        String street = streetAddress.replace('-', ' ') ;
        return street ;
    }

    /**
     * Accessor
     *      This accessor returns the city attribute with all 
     * '-' substituted for spaces. 
     * @return c (String)
     */
    public String getCity()
    {
        String c = city.replace('-', ' ') ;
        return c ;
    }

    /**
     * Accessor
     *      This accessor returns the state attribute.
     * @return state (String)
     */
    public String getState() { return state ; }

    /**
     * Accessor 
     *      This accessor returns the zipCode attribute. 
     * @return zipCode (int)
     */
    public int getZipCode() { return zipCode ; }

    /**
     * Accessor
     *      This accessor returns the uniqueID attribute. 
     * @return uniqueID (String)
     */
    public String getID() { return uniqueID ; }

    /**
     * Accessor
     *      Thie method returns the detailed information of a Person.
     * @return info (String)
     */
    public String printInfo()
    {
        String info = "" ;

        info += firstName + " " + middleName + " " + lastName + 
                " (" + uniqueID + ")" + "\n" ;
        info += "        E: " + email + "\n" ;
        info += "        T: " + telephoneNumber + "\n" ;
        info += "        A: " + getStreetAddress() + ", " + 
                         getCity() + ", " + state  + " " + 
                         String.valueOf(zipCode) + "\n" ;

        return info ;
    }
}