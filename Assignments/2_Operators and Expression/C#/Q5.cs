using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter your age in years: ");
        int years = int.Parse(Console.ReadLine());
        Console.Write("Enter additional months: ");
        int months = int.Parse(Console.ReadLine());
        Console.Write("Enter additional days: ");
        int days = int.Parse(Console.ReadLine());

        DateTime currentDate = new DateTime(2022, 10, 1);
        DateTime birthDate = currentDate.AddYears(-years).AddMonths(-months).AddDays(-days);
        Console.WriteLine("Your Date of Birth is: " + birthDate.ToString("dd-MM-yyyy"));
    }
}
