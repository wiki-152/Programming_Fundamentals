import java.util.Scanner;

public class Q10_SinCosTaylor {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the angle in degrees: ");
        double degrees = scanner.nextDouble();
        double radians = Math.toRadians(degrees);

        scanner.close();

        double sinX = calculateSin(radians);
        double cosX = calculateCos(radians);

        System.out.printf("sin(%.2f) = %.5f%n", degrees, sinX);
        System.out.printf("cos(%.2f) = %.5f%n", degrees, cosX);
    }

    public static double calculateSin(double x) {
        return x - Math.pow(x, 3) / factorial(3) + Math.pow(x, 5) / factorial(5) - Math.pow(x, 7) / factorial(7);
    }

    public static double calculateCos(double x) {
        return 1 - Math.pow(x, 2) / factorial(2) + Math.pow(x, 4) / factorial(4) - Math.pow(x, 6) / factorial(6);
    }

    public static double factorial(int n) {
        double fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
}
