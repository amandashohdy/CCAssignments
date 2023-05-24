/**********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : Course Schedular 
 * CLASS        : CS4A
 * SECTION      : TTH 6:00-6:50p
 * DUE DATE     : 23 May 2023
***********************************/

package Library;

import java.util.ArrayList ;

/**
 * Faculty Class
 *      The Faculty class extends the Person base class, represents the Faculty
 * object, and manages 3 attributes: hireDate, hasTenure, and facultySchedule. 
 */
public class Faculty extends Person
{
    final int MAX_SESSIONS ;    // max sessions a professor can teach

    private String hireDate ;       // hire date
    private boolean hasTenure ;     // if a faculty member has tenure

    // faculty schedule
    private ArrayList<Session> facultySchedule = new ArrayList<Session>() ;

    /**
     * Constructor
     *      This contructor initializes class attributes to passed values. 
     * 
     * @param numSessions (int) - MAX_SESSIONS
     * @param first (String) - first name
     * @param middle (String) - middle name
     * @param last (String) - last name
     * @param e (String) - email
     * @param number (String) - phone number
     * @param s (String) - street
     * @param c (String) - city
     * @param st (String) - state
     * @param zip (int) - zip code
     * @param date (String) - hire date
     * @param tenure (String) - hasTenure
     */
    public Faculty(int numSessions, String first, String middle, String last, String e, String number,
                   String s, String c, String st, int zip, String date, String tenure)
    {
        super(first, middle, last, e, number, s, c, st, zip) ;  // calls base constructor

        MAX_SESSIONS = numSessions ;
        hireDate = date ;
        if (Character.toLowerCase(tenure.charAt(0)) == 't') hasTenure = true ;
        else hasTenure = false ;
    }

    /**
     * Mutator
     *      This mutator adds a session to the faculty schedule. 
     * 
     * @param s (Session) - session to add to schedule
     */
    public void addSession(Session s) 
    { 
        if (facultySchedule.size() < MAX_SESSIONS) 
        {    
            facultySchedule.add(s) ; 
        }
    }

    /**
     * Mutator
     *      This mutator removes canceled sessions from the faculty schedule. 
     */
    public void cancelFacultySession()
    {
        for (int i = 0 ; i < facultySchedule.size() ; i++)
        {
            if (facultySchedule.get(i).cancel()) { facultySchedule.remove(facultySchedule.get(i--)) ; }
        }
    }

    /**
     * Accessor
     *      This method returns the MAX_SESSIONS attribute.
     * @return MAX_SESSIONS (int)
     */
    public int getMaxSessions() { return MAX_SESSIONS ; }

    /**
     * Accessor
     *      This method returns the hireDate attribute. 
     * @return hireDate (String)
     */
    public String gethireDate() { return hireDate ; }

    /**
     * Accessor
     *      This method returns the hasTenure attribute.
     * @return hasTenure (boolean)
     */
    public boolean getTenure() { return hasTenure ; }

    /**
     * Accessor
     *      This method returns the facultySchedule attribute.
     * @return facultySchedule (ArrayList<Session>)
     */
    public ArrayList<Session> getSchedule() { return facultySchedule ; }

    /**
     * Accessor
     *      This method returns the detailed information of a faculty member. 
     * @return info (String)
     */
    public String printInfo()
    {
        String info = "" ;

        info += super.printInfo() ;
        info += "        Hire Date: " + hireDate + "\n" ;
        info += "        Has Tenure: " + String.valueOf(hasTenure) + "\n" ;
        info += "  Faculty Schedule:\n" ;

        for (int i = 0 ; i < facultySchedule.size() ; i++)
        {
            info += "    " + facultySchedule.get(i).getCourse().printInfo() ;
            info += "    " + facultySchedule.get(i).printInfo() ;
            info += "            " + facultySchedule.get(i).getNumStudents() + " Students Enrolled\n" ;
        }
        info += "\n\n" ;

        return info ;
    }
}
