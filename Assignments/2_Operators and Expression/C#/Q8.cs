using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter first integer (A): ");
        int a = int.Parse(Console.ReadLine());
        Console.Write("Enter second integer (B): ");
        int b = int.Parse(Console.ReadLine());

        Console.WriteLine($"Before swap: A = {a}, B = {b}");
        a = a + b;
        b = a - b;
        a = a - b;
        Console.WriteLine($"After swap: A = {a}, B = {b}");
    }
}
