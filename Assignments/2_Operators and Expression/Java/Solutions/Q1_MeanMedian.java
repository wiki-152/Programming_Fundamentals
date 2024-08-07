import java.util.Scanner;

public class Q1_MeanMedian {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] numbers = new int[10];
        System.out.println("Enter 10 numbers in sorted order:");
        for (int i = 0; i < 10; i++) {
            numbers[i] = scanner.nextInt();
        }

        scanner.close();

        double mean = calculateMean(numbers);
        double median = calculateMedian(numbers);

        System.out.println("Mean: " + mean);
        System.out.println("Median: " + median);
    }

    public static double calculateMean(int[] numbers) {
        int sum = 0;
        for (int num : numbers) {
            sum += num;
        }
        return (double) sum / numbers.length;
    }

    public static double calculateMedian(int[] numbers) {
        return (numbers[4] + numbers[5]) / 2.0;
    }
}
