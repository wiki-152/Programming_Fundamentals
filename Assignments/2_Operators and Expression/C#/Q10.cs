using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter the angle in degrees: ");
        double degrees = double.Parse(Console.ReadLine());

        double radians = degrees * Math.PI / 180;

        double sin = CalculateSin(radians);
        double cos = CalculateCos(radians);

        Console.WriteLine($"sin({degrees}) = {sin}");
        Console.WriteLine($"cos({degrees}) = {cos}");
    }

    static double CalculateSin(double x)
    {
        return x - Math.Pow(x, 3) / Factorial(3) + Math.Pow(x, 5) / Factorial(5) - Math.Pow(x, 7) / Factorial(7);
    }

    static double CalculateCos(double x)
    {
        return 1 - Math.Pow(x, 2) / Factorial(2) + Math.Pow(x, 4) / Factorial(4) - Math.Pow(x, 6) / Factorial(6);
    }

    static double Factorial(int n)
    {
        if (n <= 1)
            return 1;
        return n * Factorial(n - 1);
    }
}
