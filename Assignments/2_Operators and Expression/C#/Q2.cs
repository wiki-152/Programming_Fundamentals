using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter principal amount (P): ");
        double principal = double.Parse(Console.ReadLine());
        Console.Write("Enter annual interest rate (r) in percentage: ");
        double annualRate = double.Parse(Console.ReadLine());
        Console.Write("Enter investment tenure (t) in years: ");
        int years = int.Parse(Console.ReadLine());

        double amount = principal * Math.Pow((1 + (annualRate / 100) / 12), 12 * years);
        Console.WriteLine($"Compound Interest after {years} years: {amount:F2}");
    }
}
