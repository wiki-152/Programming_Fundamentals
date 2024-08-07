import java.util.Scanner;

public class Q6_SecondEquationMotion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter initial velocity (u): ");
        double u = scanner.nextDouble();
        System.out.print("Enter time (t): ");
        double t = scanner.nextDouble();
        System.out.print("Enter acceleration (a): ");
        double a = scanner.nextDouble();

        scanner.close();

        double s = u * t + 0.5 * a * t * t;
        System.out.println("Distance traveled: " + s);
    }
}
