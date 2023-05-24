/**********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : Course Schedular 
 * CLASS        : CS4A
 * SECTION      : TTH 6:00-6:50p
 * DUE DATE     : 23 May 2023
***********************************/

package Application ;

import java.io.*;
import java.util.* ;

import Application.Input.departmentSessions;
import Library.* ;

/**
 * Course Schedular
 *      This program schedules courses for students and faculty based around 
 * mulitiple input files and user selections. 
 */
public class Main 
{
    /**
     * Main
     *      The main function prompts the user to select the way they would like to
     * generate IDs and sort throught information. The user is prompted to entire 
     * input data file names, the information is processed, and the resulting
     * schedules are printed to output files. 
     * 
     * @param args
     * @throws Exception
     */
    public static void main(String[] args) throws Exception
    {
        Scanner scan = new Scanner (System.in) ;

        System.out.println("How would you like to generate student and faculty IDs?") ;
        System.out.println("    1. Numerically") ;
        System.out.println("    2. Alphabetically") ;
        System.out.println("    3. AlphaNumerically") ;
        System.out.print(">>> ") ;
        int p ;

        try 
        { 
            p = scan.nextInt() ; 
            if (p < 1 || p > 3) throw new Exception() ;
        }
        catch (InputMismatchException e) 
        { 
            System.out.println("Invalid Input... Generating numerical IDs") ; 
            p = 1 ;
        }
        catch (Exception e) 
        {
            System.out.println("Input outside of valid range... Generating numerical IDs") ;
            p = 1 ;
        }

        System.out.println() ;
        System.out.println("How would you like to generate session IDs?") ;
        System.out.println("    1. Numerically") ;
        System.out.println("    2. Alphabetically") ;
        System.out.println("    3. AlphaNumerically") ;
        System.out.print(">>> ") ;
        int s ;

        try 
        { 
            s = scan.nextInt() ; 
            if (s < 1 || s > 3) throw new Exception() ;
        }
        catch (InputMismatchException e) 
        { 
            System.out.println("Invalid Input... Generating numerical IDs") ; 
            s = 1 ;
        }
        catch (Exception e) 
        {
            System.out.println("Input outside of valid range... Generating numerical IDs") ;
            s = 1 ;
        }

        GenerateID g = new GenerateID(p, s) ;
        Input input = new Input() ;

        ArrayList<Student> studentData ;            // student data
        ArrayList<Faculty> facultyData ;            // faculty data
        ArrayList<departmentSessions> depSessions ; // department session data
        ArrayList<Course> courseData ;              // course data
        try
        {
            System.out.println() ;
            System.out.print("Student info filename: InputData\\students\\studentData") ;
            String studentFile = "InputData\\students\\studentData" + scan.next() ; 
            studentData = input.readStudents(studentFile, g) ;
        
            System.out.print("Schedule info filename: InputData\\schedule\\scheduleData") ;
            String scheduleFile = "InputData\\schedule\\scheduleData" + scan.next() ;
            input.readSchedule(scheduleFile, studentData) ;

            System.out.print("Faculty info filename: InputData\\faculty\\facultyData") ;
            String facultyFile = "InputData\\faculty\\facultyData" + scan.next() ;
            facultyData = input.readFaculty(facultyFile, g) ;

            System.out.print("Session info filename: InputData\\session\\sessionData") ;
            String sessionFile = "InputData\\session\\sessionData" + scan.next() ;
            depSessions = input.readSessions(sessionFile) ;

            System.out.print("Course info filename: InputData\\course\\courseData") ;
            String courseFile = "InputData\\course\\courseData" + scan.next() ;
            courseData = input.readCourses(courseFile, depSessions, g) ;
        }
        catch (FileNotFoundException e) 
        { 
            System.out.println("File was not found... Using default data files") ; 
            studentData = input.readStudents("InputData\\students\\studentData01.txt", g) ;
            input.readSchedule("InputData\\schedule\\scheduleData01.txt", studentData) ;
            facultyData = input.readFaculty("InputData\\faculty\\facultyData01.txt", g) ;
            depSessions = input.readSessions("InputData\\session\\sessionData01.txt") ;
            courseData = input.readCourses("InputData\\course\\courseData01.txt", depSessions, g) ;
        }
        catch (InputMismatchException e) 
        { 
            System.out.println("Invalid Input... Using default data files") ; 
            studentData = input.readStudents("InputData\\students\\studentData01.txt", g) ;
            input.readSchedule("InputData\\schedule\\scheduleData01.txt", studentData) ;
            facultyData = input.readFaculty("InputData\\faculty\\facultyData01.txt", g) ;
            depSessions = input.readSessions("InputData\\session\\sessionData01.txt") ;
            courseData = input.readCourses("InputData\\course\\courseData01.txt", depSessions, g) ;
        }

        System.out.println() ;
        System.out.println() ;

        System.out.println("How would you like to schedule classes?") ;
        System.out.println("    1. Assign students to courses based on the order of their desired classes.\n" +
                           "       Add faculty members sequentially to sessions.\n" +
                           "       Cancel any courses that have not been assigned a professor or do not have enough students.") ;
        System.out.println("    2. Add faculty members sequentially to sessions.\n" + 
                           "       Add a student to all desired classes if there is space.\n" +
                           "       Cancel any courses that have not been assigned a professor or do not have enough students.") ;
        System.out.print(">>> ") ;
        String selection = scan.next() ;

        Schedular schedular = new Schedular() ;
        switch (selection)
        {
            case "1" :
            {
                schedular.assignStudents(studentData, courseData) ;
                schedular.assignProfessorsSequentially(facultyData, courseData);
                break ;
            }
            case "2" :
            {
                schedular.assignProfessorsSequentially(facultyData, courseData) ;
                schedular.assignStudentsSequentially(studentData, courseData) ;
                break ;
            }
            default :
            {
                System.out.println("Not a valid selection. Running option 1.") ;
                schedular.assignStudents(studentData, courseData) ;
                schedular.assignProfessorsSequentially(facultyData, courseData);
            }
        }
            
            Output output = new Output() ;
            int nonScheduledStudents = output.outputStudents(studentData) ;
            output.outputFaculty(facultyData) ; // try-catch
            int nonScheduledCourses = output.outputCourses(courseData) ;
            
            int totalSessions = 0 ;
            for (Course c : courseData) { totalSessions += c.getSessions().size() ; }
            
            System.out.println("\n") ;
            System.out.println("Total Students:                  " + studentData.size()) ;
            System.out.println("Total Faculty:                   " + facultyData.size()) ;
            System.out.println("Total Courses:                   " + courseData.size()) ;
            System.out.println("Total Sessions Scheduled:        " + totalSessions) ;
            System.out.println("Total Courses Unscheduled:       " + nonScheduledCourses) ;
            System.out.println("Total Students With No Classes:  " + nonScheduledStudents) ;

            scan.close() ;
        
    }
}
