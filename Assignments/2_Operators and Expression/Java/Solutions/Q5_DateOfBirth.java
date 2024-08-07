import java.util.Scanner;
import java.time.LocalDate;
import java.time.Period;
import java.time.format.DateTimeFormatter;

public class Q5_DateOfBirth {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your age in years: ");
        int years = scanner.nextInt();
        System.out.print("Enter additional months: ");
        int months = scanner.nextInt();
        System.out.print("Enter additional days: ");
        int days = scanner.nextInt();

        scanner.close();

        LocalDate currentDate = LocalDate.of(2022, 10, 1);
        LocalDate birthDate = currentDate.minus(Period.of(years, months, days));
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd-MM-yyyy");
        System.out.println("Your Date of Birth is: " + birthDate.format(formatter));
    }
}
