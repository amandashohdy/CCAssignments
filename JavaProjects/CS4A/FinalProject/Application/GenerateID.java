/**********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : Course Schedular 
 * CLASS        : CS4A
 * SECTION      : TTH 6:00-6:50p
 * DUE DATE     : 23 May 2023
***********************************/

package Application;

import Library.* ;

/**
 * GenerateID Class
 *      The GenerateID class represents the GenerateID object. The GenerateID
 * class creates a unique ID number for a Faculty, Student, or Session object
 * and calls the setID function of these objects to set the object's ID 
 * attribute either numerically, alphabetically, or alphanumerically.
 */
public class GenerateID 
{
    private int people ;                                            // Method selected for generating student and faculty IDs
    private int session ;                                           // Method selected for generating session IDs

    private static int FnRoot = 1000 ;                              // Root for generating numerical faculty IDs
    private static char[] FaRoot = {'a', 'a', 'a', 'a'} ;           // Root for generating alphabetical faculty IDs
    private static char[] FanRoot = {'a', '0'} ;                    // Root for generating alphanumerical faculty IDs

    private static int SnRoot = 1000 ;                              // Root for generating numerical student IDs
    private static char[] SaRoot = {'a', 'a', 'a', 'a'} ;           // Root for generating alphabetical student IDs
    private static char[] SanRoot = {'a', '0'} ;                    // Root for generating alphanumerical student IDs
    
    private static int SessionNumRoot = 1000 ;                      // Root for generating numerical session IDs
    private static char[] SessionAlpRoot = {'a', 'a', 'a', 'a'} ;   // Root for generating alphabetical session IDs
    private static char[] SessionAlpNumRoot = {'a', '0'} ;          // Root for generating alphanumerical session IDs

    private final String ALPHABET = "abcdefghijklmnopqrstuvwxyz" ;  // Used to update alphabetical features of IDs

    /**
     * Constructor
     *      This constructor sets the method of generating IDs to numerically (1),
     * alphabetically (2), or alphanumerically (3). 
     * 
     * @param p (int) - selection for students and faculty
     * @param s (int) - selection for sessions
     */
    public GenerateID(int p, int s)
    {
        people = p ;
        session = s ;
    }

    /**
     * Mutator
     *      This mutator sets the uniqueID attribute of a Faculty object and 
     * updates the Faculty root ID to the next ID in the sequence.
     * 
     * @param f (Faculty) - faculty member whose ID is being set
     */
    public void generateFacultyID(Faculty f)
    {
        switch (people)
        {
            case 1 :  /* Numerical IDs */
            {
                f.setID("F_" + String.valueOf(FnRoot++)) ;  // ID is set and root is incremented
                break ;
            }

            case 2 :  /* Alphabetical IDs */
            {
                f.setID("F_" + String.valueOf(FaRoot)) ;  // ID is set

                boolean end = false ;  // for loop control

                // for each character in the root
                for (int c = 0 ; c < FaRoot.length && !end ; c++)
                {
                    // for each letter in the alphabet
                    for (int l = 0 ; l < ALPHABET.length() && !end ; l++)
                    {
                        // if the characer in the root is z and is not the last character of the root
                        if (FaRoot[c] == ALPHABET.charAt(ALPHABET.length() - 1) && c < FaRoot.length - 1)
                        {
                            FaRoot[c] = ALPHABET.charAt(0) ;      // the character in the root is set to 'a'
                            FaRoot[++c] = ALPHABET.charAt(1) ;    // the next character in the root is set to 'b'
                            end = true ;                          // end the loop
                        }

                        // if the character in the root is the current letter of the alphabet
                        else if (FaRoot[c] == ALPHABET.charAt(l))
                        {
                            FaRoot[c] = ALPHABET.charAt(++l) ;  // change character to the next letter of the alphabet
                            end = true ;                        // end the loop
                        }
                    }
                }
                break ;
            }

            case 3 :  /* Alphanumerical IDs */
            {
                f.setID("F_" + String.valueOf(FanRoot)) ;  // ID is set

                // if the number is not 9
                if (FanRoot[1] != '9') 
                {
                    FanRoot[1]++ ;  // increment the number
                }

                // if the number is 9
                else 
                {
                    FanRoot[1] = '0' ;  // reset the number to 0

                    // for each letter in the alphabet
                    for (int l = 0 ; l < ALPHABET.length() ; l++)
                    {
                        // if the character is the current letter in the alphabet
                                // change character to the next letter in the alphabet
                        if (FanRoot[0] == ALPHABET.charAt(l)) { FanRoot[0] = ALPHABET.charAt(++l) ; }
                    }
                }
                break ;
            }

            default :  /* Numerical IDs */
            {
                f.setID("F_" + String.valueOf(FnRoot++)) ;
                break ;
            }
        }
    }

    /**
     * Mutator
     *      This mutator sets the uniqueID attribute of a Student object and 
     * updates the Student root ID to the next ID in the sequence.
     * 
     * @param s (Student) - student whose ID is being set
     */
    public void generateStudentID(Student s)
    {
        switch (people)
        {
            case 1 : 
            {
                s.setID("S_" + String.valueOf(SnRoot++)) ;
                break ;
            }
            case 2 : 
            {
                s.setID("S_" + String.valueOf(SaRoot)) ;

                boolean end = false ;
                for (int c = 0 ; c < SaRoot.length && !end ; c++)
                {
                    for (int l = 0 ; l < ALPHABET.length() && !end ; l++)
                    {
                        if (SaRoot[c] == ALPHABET.charAt(ALPHABET.length() - 1) && c < SaRoot.length - 1)
                        {
                            SaRoot[c] = ALPHABET.charAt(0) ;
                            SaRoot[++c] = ALPHABET.charAt(1) ;
                            end = true ;
                        }
                        else if (SaRoot[c] == ALPHABET.charAt(l))
                        {
                            SaRoot[c] = ALPHABET.charAt(++l) ;
                            end = true ;
                        }
                    }
                }
                break ;
            }
            
            case 3 : 
            {
                s.setID("S_" + String.valueOf(SanRoot)) ;
                if (SanRoot[1] != '9') 
                {
                    SanRoot[1]++ ;
                }
                else 
                {
                    SanRoot[1] = '0' ;
                    for (int l = 0 ; l < ALPHABET.length() ; l++)
                    {
                        if (SanRoot[0] == ALPHABET.charAt(l))
                        {
                            SanRoot[0] = ALPHABET.charAt(++l) ;
                        }
                    }
                }
                break ;
            }
            default : 
            {
                s.setID("S_" + String.valueOf(SnRoot++)) ;
                break ;
            }
        }
    }
    
    /**
     * Mutator
     *      This mutator sets the uniqueID attribute of a Session object and 
     * updates the Session root ID to the next ID in the sequence.
     * 
     * @param s (Session) - session whose ID is being set
     */
    public void generateSessionID(Session s)
    {
        switch (session)
        {
            case 1 : 
            {
                s.setID("C_" + String.valueOf(SessionNumRoot++)) ;
                break ;
            }
            case 2 : 
            {
                s.setID("C_" + String.valueOf(SessionAlpRoot)) ;

                boolean end = false ;
                for (int c = 0 ; c < SessionAlpRoot.length && !end ; c++)
                {
                    for (int l = 0 ; l < ALPHABET.length() && !end ; l++)
                    {
                        if (SessionAlpRoot[c] == ALPHABET.charAt(ALPHABET.length() - 1) && c < SessionAlpRoot.length - 1)
                        {
                            SessionAlpRoot[c] = ALPHABET.charAt(0) ;
                            SessionAlpRoot[++c] = ALPHABET.charAt(1) ;
                            end = true ;
                        }
                        else if (SessionAlpRoot[c] == ALPHABET.charAt(l))
                        {
                            SessionAlpRoot[c] = ALPHABET.charAt(++l) ;
                            end = true ;
                        }
                    }
                }
                break ;
            }
            
            case 3 : 
            {
                s.setID("C_" + String.valueOf(SessionAlpNumRoot)) ;
                if (SessionAlpNumRoot[1] != '9') 
                {
                    SessionAlpNumRoot[1]++ ;
                }
                else 
                {
                    SessionAlpNumRoot[1] = '0' ;
                    for (int l = 0 ; l < ALPHABET.length() ; l++)
                    {
                        if (SessionAlpNumRoot[0] == ALPHABET.charAt(l))
                        {
                            SessionAlpNumRoot[0] = ALPHABET.charAt(++l) ;
                        }
                    }
                }
                break ;
            }
            default : 
            {
                s.setID("C_" + String.valueOf(SessionNumRoot++)) ;
                break ;
            }
        }
    }
}
