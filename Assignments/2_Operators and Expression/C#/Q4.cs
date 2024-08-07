using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter number of hours worked: ");
        double hours = double.Parse(Console.ReadLine());
        Console.Write("Enter rate per hour: ");
        double rate = double.Parse(Console.ReadLine());

        double grossPay = CalculateGrossPay(hours, rate);
        Console.WriteLine("Gross Pay: " + grossPay);
    }

    static double CalculateGrossPay(double hours, double rate)
    {
        if (hours <= 40)
        {
            return hours * rate;
        }
        else
        {
            return 40 * rate + 1.5 * rate * (hours - 40);
        }
    }
}
