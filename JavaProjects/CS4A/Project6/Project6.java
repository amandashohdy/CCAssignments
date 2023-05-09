/*****************************
 * AUTHOR :  Amanda Shohdy
 * DATE   :  6 April 2023
 *****************************/

/*******************************************************************************************************
 * GENERATE A MAP OF COLORED TERRITORIES
 * 
 * This program generates a colored map of territories. The colors are assigned based on the rule that 
 * not two neighboring territories can have the same color. If no solution exists, a message stating
 * this is output to the console.
 * 
 * INPUT
 *     neighbors (boolean[][])    - two dimensional array representing whether territories touch
 *     availableColors (String[]) - array representing available colors
 *     territoryColors (int[])    - array representing assigned territory colors
 * 
 * OUTPUT
 *     If a solution is found, the territories and their associated colors are output.
 *     If no solution is found, a message - "No solution exists" - is output. 
 *******************************************************************************************************/

public class Project6 
{
	public static void main(String args[])
	{
		// defines whether territories are neighboring
		boolean neighbors[][] = { {false, true, true, true},
	                              {true, false, true, false},
                                  {true, true, false, true},
								  {true, false, true, false} } ;

		// array of available colors
		String[] availableColors = {"RED", "GREEN", "BLUE"} ;
		// String[] availableColors = {"RED", "GREEN"} ;

		// initial call to generate solution for map
		int[] territoryColors = generateColorMap(availableColors, neighbors) ;

	 // if a solution is found        display the solution
		if (territoryColors != null)  displaySolution(availableColors, territoryColors) ;
		else  System.out.println("No solution exists") ;
	}

	/************************************************************************************
	 * Function generateColorMap(String[] allColors, boolean[][] neighbors)
	 *    This function creates the result array which stores the colors associated with
	 * each territory as they are solved. Given that no solution is found, this function
	 * returns null to output the no solution message. 
	 * 
	 * PRE-CONDITIONS
	 *    allColors (String[]) 
	 *    neighbors (boolean[][])
	 * 
	 * POST-CONDITIONS
	 *    If no solution is found, the function returns null. 
	 *    Otherwise, the solution is returned in the array result. 
	 ************************************************************************************/
	public static int[] generateColorMap(String[] allColors, boolean[][] neighbors) 
	{
		// solution array 
		int[] result = new int[neighbors[0].length] ;

		// initialize result array
		for (int current = 0 ; current < neighbors[0].length ; current++)
		{
			result[current] = -1 ;
		}

		// if the helper function returns false, there is no solution
		if (!generateColorMap(allColors.length, result, 0, neighbors)) return null ;
		return result ;
	}

	/************************************************************************************************
	 * Function generateColorMap(int colorCount, int[] result, int territory, boolean[][] neighbors)
	 *    This function holds the base and recursive cases. Given that the next territory does not 
	 * have a solution, the function utilizes recursive backtracking to clear previous entries and 
	 * reassign colors to reach a solution. 
	 * 
	 * PRE-CONDITIONS
	 *    int colorCount           - total amount of colors
	 *    int[] result
	 *    int territory            - current territory
	 *    neighbors (boolean[][])
	 * 
	 * POST-CONDITIONS
	 *    If solution is found, assign color to territory and return true.
	 *    If the next solution cannot be found based on current entries, backtrack.
	 *    if no solution can be found, return false. 
	 ************************************************************************************************/
	public static boolean generateColorMap(int colorCount, int[] result, int territory, boolean[][] neighbors)
	{
		// given that all territories have an associated color, return true
		if (neighbors[0].length == territory) return true ; // base

		for (int current = 0 ; current < colorCount ; current++)
		{
			if (isValid(current, territory, result, neighbors)) 
			{
				result[territory] = current ;
				if (generateColorMap(colorCount, result, territory + 1, neighbors)) return true ; // recursive 
				result[territory] = -1 ; // backtrack
			}
		}
		return false ; // is there is no solution for current territory, return false
	}

	/************************************************************************************
	 * Function isValid(int current, int territory, int[] result, boolean[][] neighbors)
	 *    This function checks the validity of assigning a color to a territory. 
	 * 
	 * PRE-CONDITIONS
	 *    int current     - current color
	 *    int territory
	 *    int[] result
	 *    boolean[][] neighbors
	 * POST-CONDITIONS
	 *    If the attempted entry is invalid, return false.
	 *    Otherwise, return true. 
	 ************************************************************************************/
	public static boolean isValid(int current, int territory, int[] result, boolean[][] neighbors)
	{
		for (int i = 0 ; i < neighbors[0].length ; i++)
		{
			if (neighbors[territory][i] && current == result[i]) return false ;
		}
		return true ;
	}

	/************************************************************************************
	 * Function displaySolutions(String[] allColors, int[] territoryColors)
	 *    This function displays the territories and their associated colors.
	 * 
	 * PRE-CONDITIONS
	 *    allColors (String[])
	 *    territoryColors (int[])
	 * POST-CONDITIONS
	 *    The results are output. There is no return value. 
	 ************************************************************************************/
	public static void displaySolution(String[] allColors, int[] territoryColors)
	{
		for (int current = 0 ; current < territoryColors.length ; current++)
		{
			System.out.println("Territory " + current + " = " + allColors[territoryColors[current]]) ;
		}
	}

}


/*

     A    B    C    D

A    F    T    T    T

B    T    F    T    F

C    T    T    F    T

D    T    F    T    F

  -------------
  | D | C | B |
  -------------
      | A |
      -----

*/
