using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter initial velocity (u): ");
        double u = double.Parse(Console.ReadLine());
        Console.Write("Enter time (t): ");
        double t = double.Parse(Console.ReadLine());
        Console.Write("Enter acceleration (a): ");
        double a = double.Parse(Console.ReadLine());

        double s = u * t + 0.5 * a * t * t;
        Console.WriteLine("Distance traveled: " + s);
    }
}
