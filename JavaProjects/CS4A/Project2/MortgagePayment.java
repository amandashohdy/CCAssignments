import java.util.Scanner ;
public class MortgagePayment 
{
	public static void main(String[] args) 
	{
		Scanner input = new Scanner(System.in) ;
		int loanAmount ;
		double annualRate ;
		int termYears ;

		System.out.print("Please enter a positive integer for the loan amount: ") ;
		loanAmount = input.nextInt() ;
		while (loanAmount != 0)
		{
			while (loanAmount <= 0)
			{
				System.out.print("RETRY: Please enter a positive integer for the loan amount: ") ;
				loanAmount = input.nextInt() ;
			}

			System.out.print("Please enter a positive number for the annual interest rate: ") ;
			annualRate = input.nextDouble() ;
			while (annualRate <= 0)
			{
				System.out.print("RETRY: Please enter a positive number for the annual interest rate: ") ;
				annualRate = input.nextDouble() ;
			}
			double monthlyRate = annualRate / 1200 ;

			System.out.print("Please enter a positive integer for the term in years: ") ;
			termYears = input.nextInt() ;
			while (termYears <= 0)
			{
				System.out.print("RETRY: Please enter a positive integer for the term in years: ") ;
				termYears = input.nextInt() ;
			}

			double monthlyPayment = (loanAmount * (monthlyRate * Math.pow(1 + monthlyRate, termYears * 12))) 
									/ (Math.pow(1 + monthlyRate, termYears * 12) - 1) ;
			double totalPaid = monthlyPayment * (termYears * 12) ;
			double totalInterestPaid = totalPaid - loanAmount ;

			System.out.println() ;
			System.out.println("For a loan with these characteristics: ") ;
			System.out.println("      $  " + loanAmount) ;
			System.out.printf("      %4.2f annual interest rate", annualRate) ;
			System.out.println() ; 
			System.out.println("      " + termYears + " year term") ;
			System.out.println() ;
			System.out.printf("The Monthly Payment = $ %8.2f", monthlyPayment) ;
			System.out.println() ;
			System.out.printf("The Total Amount Paid = $%8.2f", totalPaid) ; 
			System.out.println() ;
			System.out.printf("The Total Interest Paid = $%8.2f", totalInterestPaid) ;
			System.out.println() ;
			System.out.println() ;
			System.out.println() ;
			System.out.print("Please enter a positive integer for the loan amount: ") ;
			loanAmount = input.nextInt() ;
		}
		System.out.println("THANK YOU FOR USING THE MORTGAGE CALCULATOR!!") ;
	}
}
