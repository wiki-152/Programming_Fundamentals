using System;

class Program
{
    static void Main()
    {
        const double y = 10;
        const double d = 20;

        Console.Write("Enter value of c: ");
        double c = double.Parse(Console.ReadLine());
        Console.Write("Enter value of v: ");
        double v = double.Parse(Console.ReadLine());

        double result = (y - c) / (d + v);
        Console.WriteLine("Result: " + result);
    }
}
