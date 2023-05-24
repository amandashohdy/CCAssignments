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
 * Session Class
 *      The Session class represents the Session object and manages 4 attributes:
 * course, sessionID, professor, and enrolledStudents. 
 */
public class Session 
{
    private Course course ;                 // course
    private String sessionID ;              // session ID
    private Faculty professor ;             // assigned professor
    private boolean profAssigned = false ;
    // list of enrolled students
    private ArrayList<Student> enrolledStudents = new ArrayList<Student>() ;

    /**
     * Constructor
     *      This constructor initializes the course attribute to the passed value.
     * @param c (Course)
     */
    public Session(final Course c)
    {
        course = c ;
    }

    /**
     * Mutator
     *      This mutator sets the sessionID attribute. 
     * @param id (String)
     */
    public void setID(String id) { sessionID = id ; }

    /**
     * Mutator
     *      This mutator sets the professor attribute.
     * @param f (Faculty)
     */
    public void assignProf(Faculty f) { professor = f ; profAssigned = true ; }

    /**
     * Mutator
     *      This mutator adds a Student to the enrolledStudents array list. 
     * @param s (Student)
     */
    public void addStudent(Student s) { enrolledStudents.add(s) ;}

    /**
     * Accessor
     *      This accessors checks if there is space for another student to
     * enroll in a Session. 
     * @return boolean
     */
    public boolean enoughSpace()
    {
        if (enrolledStudents.size() >= course.getMaxStudents()) return false ;
        else return true ;
    }

    /**
     * Accessor
     *      This accessor checks if a Session should be canceled for either not meeting
     * the minimum requirement of students or not having an assigned professor.
     * @return boolean
     */
    public boolean cancel()
    {
        if (profAssigned == false) return true ;
        else if (enrolledStudents.size() < course.getMinStudents()) { return true ; }
        else return false ;
    }

    /**
     * Accessor
     *      This accessor returns the professor attribute.
     * @return professor (Faculty)
     */
    public Faculty getProfessor() { return professor ; }

    /**
     * Accessor 
     *      This accessor returns the course attribute.
     * @return course (Course)
     */
    public Course getCourse() { return course ; }

    /**
     * Accessor
     *      This accessor returns the sessionID attribute.
     * @return sessionID (String)
     */
    public String getSessionID() { return sessionID ; }

    /**
     * Accessor
     *      This accesssor returns the number of enrolled students.
     * @return enrolledStudents.size() (int)
     */
    public int getNumStudents() { return enrolledStudents.size() ; }

    /**
     * Accessor
     *      This accessor returns the enrolledStudents attribute.
     * @return enrolledStudents (ArrayList<Student>)
     */
    public ArrayList<Student> getEnrolledStudents() { return enrolledStudents ; }

    /**
     * Accessor
     *      This accessor returns the session ID information.
     * @return String
     */
    public String printInfo()
    {
        return "    Session: " + sessionID + "\n" ;
    }

    /**
     * Accessor
     *      This accessor returns the information of the Professor assigned to the 
     * Session.
     * @return String 
     */
    public String printProfInfo()
    {
        return "      Professor " + professor.getFirstName() + " " + professor.getMiddleName() 
               + " " + professor.getLastName() + " (" + professor.getID() + ")\n" ;
    }

    /**
     * Accessor
     *      This accessor returns the information of each student enrolled in the session. 
     * @return info (String)
     */
    public String printStudentInfo()
    {
        String info = "        " + String.valueOf(enrolledStudents.size()) + " Students: \n" ;
        for (Student s : enrolledStudents)
        {
            info += "          " + s.getFirstName() + " " + s.getMiddleName() + " " + s.getLastName() +
                    " (" + s.getID() + ") \n"  ;
        }
        return info ;
    }
}
