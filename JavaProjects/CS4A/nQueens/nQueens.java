/*******************************
 * AUTHOR:     Amanda Shohdy
 * ASSIGNMENT: NQueens
 * CLASS:      CS4A
 * DUE DATE:   14 March 2023
 *******************************/
package nQueens ;
public class nQueens
{
	public static void main(String[] args)
	{
		int[][] board4by4 = new int[4][4] ;
		int[][] board8by8 = new int[8][8] ;
		// initialize the values for the 4x4 board to 0
		for (int r = 0 ; r < board4by4.length ; r++)
		{
			for (int c = 0 ; c < board4by4[r].length ; c++)
			{
				board4by4[r][c] = 0 ;
			}
		}
		// initialize the values for the 8x8 board to 0 
		for (int r = 0 ; r < board8by8.length ; r++)
		{
			for (int c = 0 ; c < board8by8[r].length ; c++)
			{
				board8by8[r][c] = 0 ;
			}
		}

		solve(0, board4by4) ;   // call the solve board recursive function for the 4x4
		printBoard(board4by4);  // print the solved 4x4 board
		solve(0, board8by8) ;   // call the solve board recursive function for the 8x8
		printBoard(board8by8) ; // print the solved 8x8 board
	}

	public static boolean solve(int col, int board[][])
	{
		if (col == board.length) return true ;   // if all queens have been placed

		for (int row = 0 ; row < board.length ; row++)
		{
			if (isValid(row, col, board))    // if a move is valid
			{
				board[row][col] = 1 ;      // place the queen 
				if (solve(col+1, board)) return true ;
				board[row][col] = 0 ;      // if no other moves are possible, backtrack
			}
		}
		return false ;
	}

	public static boolean isValid(int row, int col, int board[][])
	{
		// check row
		for (int i = 0; i < col; i++) 
			if (board[row][i] == 1)
				return false;
		// check diagonal
		for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) 
			if (board[i][j] == 1)
				return false;
		// check diagonal
		for (int i = row, j = col; j >= 0 && i < board.length; i++, j--)
			if (board[i][j] == 1)
				return false;
		return true ;
	}

	public static void printBoard(int board[][])
	{
		for (int i = 0 ; i < board.length ; i++)
		{
			for (int j = 0 ; j < board[i].length ; j++)
			{
				if (board[i][j] == 0) System.out.print("   |") ;
				if (board[i][j] == 1) System.out.print(" Q |") ;
			}
			System.out.println() ;
			System.out.println() ;
		}
		System.out.println() ;
	}
}
