/**********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : Course Schedular 
 * CLASS        : CS4A
 * SECTION      : TTH 6:00-6:50p
 * DUE DATE     : 23 May 2023
***********************************/

package Application ;

import java.util.* ;
import java.io.* ;

import Library.*;

/**
 * Input Class
 *      The Input class represents the Input object. The Input class contains all methods
 * associated with reading data from input files and processing that data. 
 */
public class Input 
{
    /**
     * Mutator
     *      This method takes in a filename and reads all the student data contained
     * in the file. Student objects are created and added to an ArrayList based on
     * the file contents. The ArrayList is then returned. 
     * 
     * @param filename (String) - the file containing all student data
     * @param g (GenerateID)
     * @return students (ArrayList<Student>) - array list of student objects
     * @throws FileNotFoundException
     */
    public ArrayList<Student> readStudents(String filename, GenerateID g) throws FileNotFoundException
    {
        File studentData = new File(filename) ;
        Scanner sInput = new Scanner(studentData) ;

        ArrayList<Student> students = new ArrayList<Student>() ;    // array list of student objects

        // File Format: 
        //   firstName  middleName  lastName  email  number  street  city  state  zip  birthday  gpa  startDate
        while (sInput.hasNext())
        {
            String first = sInput.next() ;
            String middle = sInput.next() ;
            String last = sInput.next() ;

            String e = sInput.next() ;
            String number = sInput.next() ;

            String street = sInput.next() ;
            String city = sInput.next() ;
            String state = sInput.next() ;
            int zip = sInput.nextInt() ;

            String dob = sInput.next() ;
            String gpa = sInput.next() ;
            String startDate = sInput.next() ;

            Student newStudent = new Student(first, middle, last, e, number, street, city,
                                             state, zip, dob, gpa, startDate) ;
            g.generateStudentID(newStudent) ;   // generate and set newStudent ID
            students.add(newStudent) ;          // add newStudent to array
        }
        
        sInput.close() ;

        return students ;
    }

    /**
     * Mutator
     *      This method takes in a filename and reads all schedule data for each student.
     * The student's desired classes are read in and stored in an array. 
     * 
     * @param filename (String) - the file containing schedule data
     * @param students (ArrayList<Student>) - ArrayList of students
     * @throws FileNotFoundException
     */
    public void readSchedule(String filename, ArrayList<Student> students) throws FileNotFoundException
    {
        File scheduleData = new File(filename) ;
        Scanner scInput = new Scanner(scheduleData) ;

        // for each student in the list
        for (int i = 0 ; i < students.size() ; i++)
        {
            String first = scInput.next() ;
            String middle = scInput.next() ;
            String last = scInput.next() ;

            // if the student in the list matches the student in the file
            if (first.equals(students.get(i).getFirstName()) &&
                middle.equals(students.get(i).getMiddleName()) &&
                last.equals(students.get(i).getLastName()))
            {
                // for each position in the desiredCourses array
                for (int index = 0 ; index < students.get(0).getMaxSessions() ; index++)
                {
                    students.get(i).addCourse(index, scInput.next()) ;  // update array
                }
            }
        }

        scInput.close() ;
    }

    /**
     * Mutator
     *      This method takes in a filename and reads all the faculty data contained
     * in the file. Faculty objects are created and added to an ArrayList based on
     * the file contents. The ArrayList is then returned. 
     * 
     * @param filename (String) - the file containing all faculty data
     * @param g (GenerateID)
     * @return faculty (ArrayList<Faculty>) - array list of faculty objects
     * @throws FileNotFoundException
     */
    public ArrayList<Faculty> readFaculty(String filename, GenerateID g) throws FileNotFoundException
    {
        File facultyData = new File (filename) ;
        Scanner fInput = new Scanner(facultyData) ;

        ArrayList<Faculty> faculty = new ArrayList<Faculty>() ;

        int numSessions = fInput.nextInt() ;    // max sessions a professor can teach

        // File Format:
        //   firstName  middleName  lastName  email  number  street  city  state  zip  date  tenure
        while (fInput.hasNext())
        {
            String first = fInput.next() ;
            String middle = fInput.next() ;
            String last = fInput.next() ;

            String e = fInput.next() ;
            String number = fInput.next() ;

            String street = fInput.next() ;
            String city = fInput.next() ;
            String state = fInput.next() ;
            int zip = fInput.nextInt() ;

            String hireDate = fInput.next() ;
            String hasTenure = fInput.next() ;

            Faculty newFaculty = new Faculty(numSessions, first, middle, last, e, number, street, city,
                                             state, zip, hireDate, hasTenure) ;
            g.generateFacultyID(newFaculty) ;
            faculty.add(newFaculty) ;
        }

        fInput.close() ;

        return faculty ;
    }

    // class to hold data on how many sessions for each department
    class departmentSessions 
    {
        String dep ; 
        int numSessions ;
    } ;

    /**
     * Mutator
     *      This method reads in session data for each department. 
     * 
     * @param filename (String) - file containing session data
     * @return depSessions (ArrayList<departmentSessions>) - number of sessions for each department
     * @throws FileNotFoundException
     */
    public ArrayList<departmentSessions> readSessions(String filename) throws FileNotFoundException
    {
        File sessionData = new File(filename) ;
        Scanner sInput = new Scanner(sessionData) ;

        ArrayList<departmentSessions> depSessions = new ArrayList<departmentSessions>() ;

        // File Format: 
        //   department    #sessions
        while (sInput.hasNext())
        {
            String department = sInput.next() ;
            int numSess = sInput.nextInt() ;

            departmentSessions newSession = new departmentSessions() ;
            newSession.dep = department ;
            newSession.numSessions = numSess ;
            
            depSessions.add(newSession) ;
        }

        sInput.close() ;

        return depSessions ;
    }

    /**
     * Mutator
     *      This method takes in a filename and reads in all course data contained in the
     * file. Course objects are created and added to a ArrayList based on the file
     * contents. Sessions are created based on the contents of the dSessions ArrayList. 
     * The courses ArrayList is then returned.
     * 
     * @param filename - file containing course data
     * @param dSessions - session information based on department
     * @param g - GenerateID object
     * @return courses (ArrayList<Course>) - array list of course objects
     * @throws FileNotFoundException
     */
    public ArrayList<Course> readCourses(String filename, ArrayList<departmentSessions> dSessions, GenerateID g) throws FileNotFoundException
    {
        File courseData = new File(filename) ;
        Scanner cInput = new Scanner(courseData) ;

        ArrayList<Course> courses = new ArrayList<Course>() ;

        // File Format:
        //   department  code  description  maxStudents  minStudents
        while (cInput.hasNext())
        {
            String dep = cInput.next() ;
            String c = cInput.next() ;
            String desc = cInput.next() ;
            int max = cInput.nextInt() ;
            int min = cInput.nextInt() ;

            Course newCourse = new Course(dep, c, desc, max, min) ;

            // for each department
            for (departmentSessions d : dSessions)
            {
                // if the current course matches the current department
                if (d.dep.equals(dep))
                {
                    // create as many sessions as defined for the department
                    for (int i = 0 ; i < d.numSessions ; i++)
                    {    
                        Session session = new Session(newCourse) ;
                        g.generateSessionID(session) ;
                        newCourse.addSession(session) ; // add session to the course
                    }
                }
            }
            courses.add(newCourse) ;
        }
        cInput.close() ;
        
        return courses ;
    }
}
