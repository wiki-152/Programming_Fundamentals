import java.util.Scanner;

public class Q3_FormulaCalculation {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter value of c: ");
        double c = scanner.nextDouble();
        System.out.print("Enter value of v: ");
        double v = scanner.nextDouble();

        scanner.close();

        double y = 10;
        double d = 20;
        double result = (y - c) / (d + v);

        System.out.println("Result: " + result);
    }
}
