import java.util.Scanner;

public class Q8_SwapWithoutThirdVar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter value of A: ");
        int A = scanner.nextInt();
        System.out.print("Enter value of B: ");
        int B = scanner.nextInt();

        scanner.close();

        System.out.println("Before swap: A = " + A + ", B = " + B);
        A = A + B;
        B = A - B;
        A = A - B;
        System.out.println("After swap: A = " + A + ", B = " + B);
    }
}
