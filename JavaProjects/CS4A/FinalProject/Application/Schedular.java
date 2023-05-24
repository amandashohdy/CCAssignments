/**********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : Course Schedular 
 * CLASS        : CS4A
 * SECTION      : TTH 6:00-6:50p
 * DUE DATE     : 23 May 2023
***********************************/

package Application;

import java.util.ArrayList ;
import Library.* ;

/**
 * Schedular Class
 *      The Schedular class represents the Schedular object. The Schedular class contains all
 * methods accociated with assigning professors and students to course sessions.
 */
public class Schedular 
{
    /**
     * Mutator
     *      This method assigns faculty members to sessions sequentially. 
     * 
     * @param faculty (ArrayList<Faculty>)
     * @param courses (ArrayList<Course>)
     */
    public void assignProfessorsSequentially(ArrayList<Faculty> faculty, ArrayList<Course> courses)
    {
        int currProf = 0 ;
        int count ;
        int currCourse = 0 ; 
        int currSession ;

        // while there are still professors available
        while (currProf < faculty.size())
        {
            count = 0 ;  // how many sessions a professor has been assigned
            // while the professor still has opening and there are still available courses
            while (count < faculty.get(currProf).getMaxSessions() && currCourse < courses.size())
            {
                // for each session in the current course
                for (currSession = 0 ; currSession < courses.get(currCourse).getSessions().size() ; currSession++)
                {
                    Session currentSession = courses.get(currCourse).getSessions().get(currSession) ;
                    // if the current professor still has availability 
                    if (count < faculty.get(currProf).getMaxSessions())
                    {
                        currentSession.assignProf(faculty.get(currProf));   // assign the professor to the session
                        faculty.get(currProf).addSession(currentSession) ;  // add the session to the prof's schedule
                        count++ ;
                    }
                    // if the current professor has no more eligibility 
                    else if (currProf + 1 < faculty.size())
                    {
                        count = 1 ;
                        currProf++ ;    // move on to the next professor
                        currentSession.assignProf(faculty.get(currProf));   // assign professor
                        faculty.get(currProf).addSession(currentSession) ;  // add session to schedule
                    }
                }
                currCourse++ ;
            }
            currProf++ ;
        }
    }

    /**
     * Mutator
     *      This method assign students to classes sequentially.
     * 
     * @param students (ArrayList<Student>)
     * @param courses (ArrayList<Course>)
     */
    public void assignStudentsSequentially(ArrayList<Student> students, ArrayList<Course> courses)
    {
        boolean assigned = false ;  // control for loop

        // for each student in the students list
        for (int currStudent = 0 ; currStudent < students.size() ; currStudent++)
        {
            // for each desired course of the current student
            for (int desiredCourse = 0 ; desiredCourse < students.get(currStudent).getDesiredCourses().length ; desiredCourse++)
            {
                assigned = false ;
                for (int currCourse = 0 ; currCourse < courses.size() && !assigned ; currCourse++)
                {
                    String currDesiredCourse = students.get(currStudent).getDesiredCourses()[desiredCourse] ;
                    // if the current desired course is the current course
                    if (currDesiredCourse.equals(courses.get(currCourse).getCourseID()))
                    {
                        // for each session in the current course
                        for (int currSession = 0 ; currSession < courses.get(currCourse).getSessions().size() && !assigned ; currSession++)
                        {
                            // if there is enough space in the course
                            if (courses.get(currCourse).getSessions().get(currSession).enoughSpace()) 
                            {
                                // add the student to the session
                                courses.get(currCourse).getSessions().get(currSession).addStudent(students.get(currStudent)) ;
                                // add the session to the student's schedule
                                students.get(currStudent).addSession(courses.get(currCourse).getSessions().get(currSession)) ;
                                assigned = true ;   // move on to the next desired course
                            }
                        }
                    }
                }
            }
        }
    }

    /**
     * Mutator
     *      This method assigns students to sessions by assigning each student's first desired course, then moving to
     * each student's second desired course until the fourth desired course. 
     * 
     * @param students (ArrayList<Student>)
     * @param courses (ArrayList<Course>)
     */
    public void assignStudents(ArrayList<Student> students, ArrayList<Course> courses)
    {
        boolean assigned = false ;
        
        // for each index in the desired courses array
        for (int i = 0 ; i < students.get(0).getMaxSessions() ; i++)
        {
            // for each student
            for (int currStudent = 0 ; currStudent < students.size() ; currStudent++)
            {
                assigned = false ;
                // for each course
                for (int currCourse = 0 ; currCourse < courses.size() && !assigned ; currCourse++)
                {
                    // if the current course is the desired course of the student
                    if (students.get(currStudent).getDesiredCourses()[i].equals(courses.get(currCourse).getCourseID()))
                    {
                        // for each session in the course
                        for (int currSession = 0 ; currSession < courses.get(currCourse).getSessions().size() && !assigned ; currSession++)
                        {
                            // if the session has space
                            if (courses.get(currCourse).getSessions().get(currSession).enoughSpace()) 
                            {
                                // add the student to the session
                                courses.get(currCourse).getSessions().get(currSession).addStudent(students.get(currStudent)) ;
                                // add the session to the student's schedule
                                students.get(currStudent).addSession(courses.get(currCourse).getSessions().get(currSession)) ;
                                assigned = true ;   // move on to the next student
                            }
                        }
                    }
                }
            }
        }
    }
}
