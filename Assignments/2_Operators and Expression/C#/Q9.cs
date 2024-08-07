using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter the number of seconds: ");
        int totalSeconds = int.Parse(Console.ReadLine());

        int hours = totalSeconds / 3600;
        totalSeconds %= 3600;
        int minutes = totalSeconds / 60;
        int seconds = totalSeconds % 60;

        Console.WriteLine($"{hours} hrs {minutes} mins {seconds} secs");
    }
}
