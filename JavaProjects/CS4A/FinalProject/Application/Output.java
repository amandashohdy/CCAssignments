/**********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : Course Schedular 
 * CLASS        : CS4A
 * SECTION      : TTH 6:00-6:50p
 * DUE DATE     : 23 May 2023
***********************************/

package Application;

import java.util.ArrayList ;
import java.io.* ;

import Library.* ;

/**
 * Output Class
 *      The Output class represents the Output object. The Output class contains
 * all methods associated with printing data to output files after it has been processed. 
 */
public class Output 
{
    /**
     * Mutator
     *      This method takes in the Faculty data array list and outputs the Faculty 
     * members' information and schedules to the file. 
     * 
     * @param f (ArrayList<Faculty>) - Faculty objects
     * @throws Exception
     */
    public void outputFaculty(ArrayList<Faculty> f) throws Exception
    {
        File facultyOutput = new File("OutputData\\Faculty.txt") ;
        PrintWriter fOutput = new PrintWriter(facultyOutput) ;
        fOutput.println("Faculty Information") ;
        fOutput.println("--------------------") ;

        int n = 1 ;     // faculty numbering
        for (int i = 0 ; i < f.size() ; i++) 
        {
            f.get(i).cancelFacultySession() ;   // removes canceled sessions from schedule
            fOutput.print("\n\n" + n++ + ". ") ;
            fOutput.print(f.get(i).printInfo()) ; 
        } 
        fOutput.close() ;
    }

    /**
     * Mutator
     *      This method outputs student data to files depending on whether or not 
     * the student is enrolled in any courses. If the student is enrolled in classes, 
     * their information and their schedule is output. Otherwise, only their information
     * is output.
     * 
     * @param s (ArrayList<Student>) - Student objects
     * @return --ns (int) - number of unscheduled students
     * @throws Exception
     */
    public int outputStudents(ArrayList<Student> s) throws Exception
    {
        File nonScheduledStudents = new File("OutputData\\UnscheduledStudents.txt") ;
        PrintWriter nonScheduled = new PrintWriter(nonScheduledStudents) ;
        nonScheduled.println("Non-Scheduled Students") ;
        nonScheduled.println("-----------------------") ;

        File scheduledStudents = new File("OutputData\\ScheduledStudents.txt") ;
        PrintWriter scheduled = new PrintWriter(scheduledStudents) ;
        scheduled.println("Scheduled Students") ;
        scheduled.println("-------------------") ;

        int ns = 1 ;    // non scheduled students numbering
        int ss = 1 ;    // scheduled students numbering
        for (int i = 0 ; i < s.size() ; i++)
        {
            s.get(i).cancelStudentSession() ;   // removes canceled sessions from schedule
            // if the student is not in any sessions
            if (s.get(i).getSessionCount() == 0)
            {
                nonScheduled.print("\n\n" + ns++ + ". ") ;
                nonScheduled.print(s.get(i).printInfo()) ;
            }
            else 
            {
                scheduled.print("\n\n" + ss++ + ". ") ;
                scheduled.print(s.get(i).printInfo()) ;
                scheduled.print(s.get(i).printScheduleInfo()) ;
            }
        }

        nonScheduled.close() ;
        scheduled.close() ;

        return --ns ;
    }

    /**
     * Mutator
     *      This method outputs course data to files depending on whether or not 
     * the course was scheduled. If the course has no sessions, it is output to 
     * a non-schedule courses file. If the course has sessions, the course details, 
     * session details, professor, and student information is output.
     * @param c (ArrayList<Course>) - Course objects
     * @return --ns (int) - number of unschedule courses
     * @throws Exception
     */
    public int outputCourses(ArrayList<Course> c) throws Exception
    {
        File nonScheduledCourses = new File("OutputData\\UnscheduledCourseSessions.txt") ;
        PrintWriter nonSched = new PrintWriter(nonScheduledCourses) ;
        nonSched.println("Non-Scheduled Courses") ;
        nonSched.println("----------------------") ;

        File scheduledCourses = new File("OutputData\\ScheduledCourseSessions.txt") ;
        PrintWriter sched = new PrintWriter(scheduledCourses) ;
        sched.println("Scheduled Courses") ;
        sched.println("------------------") ;

        int ns = 1 ;
        int ss = 1 ;
        for (int i = 0 ; i < c.size() ; i++) 
        {
            c.get(i).cancelSessions() ;  // removes canceled sessions
            // if the course has no sessions
            if (c.get(i).getSessions().size() == 0)
            {
                nonSched.print("\n\n" + ns++ + ". ") ;
                nonSched.print(c.get(i).printInfo()) ;
                nonSched.print("        Minimum Students: " + c.get(i).getMinStudents()) ;
            }
            else
            {
                sched.print("\n\n" + ss++ + ". ") ;
                sched.print(c.get(i).printInfo()) ;
                sched.print(c.get(i).printSessions()) ;
            }
        }

        nonSched.close() ;
        sched.close() ;

        return --ns ;
    }
}
