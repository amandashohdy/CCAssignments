import java.util.Scanner;

public class AverageCalculator {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    double num1, num2, num3;
    double average;
    System.out.print("Please enter the first number: ");
    num1 = input.nextDouble();
    System.out.print("Please enter the second number: ");
    num2 = input.nextDouble();
    System.out.print("Please enter the third (and largest) number: ");
    num3 = input.nextDouble();
    average = (num1 + num2 + num3) / 3;
    System.out.println();
    System.out.println("The average of " + (int)num1 + ", " + (int)num2 + ", and " +
        (int)num3 + " is " + average);
  }
}
