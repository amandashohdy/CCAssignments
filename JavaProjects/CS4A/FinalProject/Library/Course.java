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
 * Course Class
 *      The Course class represents the Course object and manages 7 
 * attributes: department, code, courseID, description, maxStudents,
 * minStudents, and sessions.
 */
public class Course 
{
    private String department ;     // department course belongs to
    private String code ;           // code of the course
    private String courseID ;       // department + code
    private String description ;    // description of course

    private int maxStudents ;       // max students enrolled
    private int minStudents ;       // minimum students enrolled

    // course sessions
    private ArrayList<Session> sessions = new ArrayList<Session>() ; 

    /**
     * Constructor
     *      This constructor initializes class attributes to passed values.
     * 
     * @param dep (String) - department
     * @param c   (String) - code
     * @param des (String) - description
     * @param max (int)    - max students
     * @param min (int)    - min students
     */
    public Course(String dep, String c, String des, int max, int min)
    {
        department = dep ;
        code = c ;
        courseID = department + code ;
        description = des ;

        maxStudents = max ;
        minStudents = min ;
    }

    /**
     * Mutator
     *      This method adds sessions to the course.
     * @param s (Session) - added session
     */
    public void addSession(Session s) { sessions.add(s) ; }

    /**
     * Mutator
     *      This method removes sessions that have no professor or
     * too few students from the sessions array list.
     */
    public void cancelSessions()
    {
        for (int i = 0 ; i < sessions.size() ; i++)
        {
            if (sessions.get(i).cancel()) { sessions.remove(sessions.get(i--)) ; }
        }
    }

    /**
     * Accessor
     *      This method returns the department attribute. 
     * @return department (String)
     */
    public String getDepartment() { return department ; }

    /**
     * Accessor 
     *      This method returns the code attribute.
     * @return code (String)
     */
    public String getCode() { return code ; }

    /**
     * Accessor 
     *      This method returns the courseID attribute. 
     * @return courseID (String)
     */
    public String getCourseID() { return courseID ; }

    /**
     * Accessor
     *      This method returns the course's description 
     * substituting any '-' with a space. 
     * @return d (String)
     */
    public String getDescription() 
    { 
        String d = description.replace('-', ' ') ;
        return d ; 
    }

    /**
     * Accessor
     *      This method returns the max students in a course.
     * @return maxStudents (int)
     */
    public int getMaxStudents() { return maxStudents ; }

    /**
     * Accessor
     *      This method returns the min students in a course.
     * @return minStudents (int)
     */
    public int getMinStudents() { return minStudents ; }

    /**
     * Accessor
     *      This method returns the sessions in a course.
     * @return sessions (ArrayList<Session>)
     */
    public ArrayList<Session> getSessions() { return sessions ; }

    /**
     * Accessor
     *      This method returns the courseID and description of a course.
     * @return courseID " " description (String)
     */
    public String printInfo() { return courseID + " " + description + "\n" ; }

    /**
     * Accessor
     *      This method returns the detailed information of a session. 
     * @return info (String)
     */
    public String printSessions() 
    {
        String info = "" ;
        for (Session s : sessions) 
        { 
            info += "\n" ;
            info += s.printInfo() ; 
            info += s.printProfInfo() ;
            info += s.printStudentInfo() ;
        }
        return info ;
    }
}
