using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int[] numbers = new int[10];
        Console.WriteLine("Enter 10 numbers in sorted order:");
        for (int i = 0; i < 10; i++)
        {
            numbers[i] = int.Parse(Console.ReadLine());
        }

        double mean = numbers.Average();
        double median = (numbers[4] + numbers[5]) / 2.0;

        Console.WriteLine("Mean: " + mean);
        Console.WriteLine("Median: " + median);
    }
}
