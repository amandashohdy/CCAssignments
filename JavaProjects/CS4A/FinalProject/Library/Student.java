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
 * Student Class
 *      The Student class extends the Person base class, represents the Student
 * object, and manages 5 attributes: dateOfBirth, gpa, startDate, desiredCourses, 
 * and studentSchedule. 
 */
public class Student extends Person
{
    final int MAX_SESSIONS = 4 ; // max classes a student can enroll in

    private String dateOfBirth ;    // date of birth
    private String gpa ;            // gpa
    private String startDate ;      // start date

    // student's desired courses
    private String[] desiredCourses = new String[MAX_SESSIONS] ;

    // student's enrolled sessions
    private ArrayList<Session> studentSchedule = new ArrayList<Session>() ;

    /**
     * Constructor
     *      This constructor initializes class attributes to passed values.
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
     * @param dob (String) - date of birth
     * @param GPA (String) - gpa
     * @param date (String) - start date
     */
    public Student(String first, String middle, String last, String e, String number,
                   String s, String c, String st, int zip, String dob, 
                   String GPA, String date) 
    {
        super(first, middle, last, e, number, s, c, st, zip) ; // calls base constructor

        dateOfBirth = dob ;
        gpa = GPA ;
        startDate = date ;
    }

    /**
     * Mutator
     *      This mutator adds a desired courseID to the desired courses array
     * @param i (int) - index
     * @param c (String) - courseID
     */
    public void addCourse(int i, String c) { desiredCourses[i] = c ; }

    /**
     * Mutator
     *      This mutator adds a course to the student's schedule.
     * @param s (Session) - session to add
     */
    public void addSession(Session s) { if (studentSchedule.size() < MAX_SESSIONS) studentSchedule.add(s) ; }

    /**
     * Mutator
     *      This mutator removes canceled sessions from the student's schedule.
     */
    public void cancelStudentSession()
    {
        for (int i = 0 ; i < studentSchedule.size() ; i++)
        {
            if (studentSchedule.get(i).cancel()) { studentSchedule.remove(studentSchedule.get(i--)) ; }
        }
    }

    /**
     * Accessor
     *      This accessor returns the MAX_SESSIONS attribute. 
     * @return MAX_SESSIONS (int)
     */
    public int getMaxSessions() { return MAX_SESSIONS ; }

    /**
     * Accessor
     *      This accessor returns the dateOfBirth attribute. 
     * @return dateOfBirth (String)
     */
    public String getDOB() { return dateOfBirth ; }

    /**
     * Accessor
     *      This accessor returns the gpa attribute.
     * @return gpa (String)
     */
    public String getGPA() { return gpa ; }

    /**
     * Accessor
     *      This accessor returns the startDate attribute.
     * @return startDate (String)
     */
    public String getStartDate() { return startDate ; }

    /**
     * Accessor 
     *      This accessor returns the number of classes a Student is 
     * enrolled in.
     * @return studentSchedule.size() (int)
     */
    public int getSessionCount() { return studentSchedule.size() ; }

    /**
     * Accessor 
     *      This accessor returns the desiredCourses attribute.
     * @return desiredCourses (String[])
     */
    public String[] getDesiredCourses() { return desiredCourses ; }

    /**
     * Accessor 
     *      This accessor returns the studentSchedule attribute. 
     * @return studentSchedule (ArrayList<Session>)
     */
    public ArrayList<Session> getSchedule() { return studentSchedule ; }

    /**
     * Accessor
     *      This accessor returns the detailed information of a Student.
     * @return info (String)
     */
    public String printInfo()
    {
        String info = "" ;

        info += super.printInfo() ;
        info += "        DOB: " + dateOfBirth + "\n" ;
        info += "        GPA: " + gpa + "\n" ;
        info += "        Start Date: " + startDate + "\n\n" ;

        return info ;
    }

    /**
     * Accessor 
     *      This accessor returns the schedule of a Student.
     * @return info (String)
     */
    public String printScheduleInfo() 
    {
        String info = "" ;
        for (Session s : studentSchedule)
        {
                info += "    " + s.getCourse().getCourseID() + " " + s.getCourse().getDescription() + "\n" ;
                info += "    " + s.printInfo() ;
        }
        return info ;
    }

}
