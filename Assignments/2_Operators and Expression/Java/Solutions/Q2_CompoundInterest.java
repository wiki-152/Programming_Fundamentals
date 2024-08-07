import java.util.Scanner;

public class Q2_CompoundInterest {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter principal amount (P): ");
        double principal = scanner.nextDouble();
        System.out.print("Enter annual interest rate (r) in percentage: ");
        double annualRate = scanner.nextDouble();
        System.out.print("Enter investment tenure (t) in years: ");
        int years = scanner.nextInt();

        scanner.close();

        double amount = principal * Math.pow((1 + (annualRate / 100) / 12), 12 * years);
        System.out.printf("Compound Interest after %d years: %.2f%n", years, amount);
    }
}
