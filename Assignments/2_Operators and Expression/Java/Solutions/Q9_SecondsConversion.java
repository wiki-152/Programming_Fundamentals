import java.util.Scanner;

public class Q9_SecondsConversion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number of seconds: ");
        int totalSeconds = scanner.nextInt();

        scanner.close();

        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        System.out.printf("%d hrs %d mins %d secs%n", hours, minutes, seconds);
    }
}
