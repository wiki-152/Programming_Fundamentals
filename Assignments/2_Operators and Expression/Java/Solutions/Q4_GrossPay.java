import java.util.Scanner;

public class Q4_GrossPay {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number of hours worked: ");
        double hours = scanner.nextDouble();
        System.out.print("Enter rate per hour: ");
        double rate = scanner.nextDouble();

        scanner.close();

        double grossPay = calculateGrossPay(hours, rate);
        System.out.println("Gross Pay: " + grossPay);
    }

    public static double calculateGrossPay(double hours, double rate) {
        if (hours <= 40) {
            return hours * rate;
        } else {
            return 40 * rate + 1.5 * rate * (hours - 40);
        }
    }
}
