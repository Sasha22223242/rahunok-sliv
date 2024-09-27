using System;

class Програма
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        Console.WriteLine("Введіть речення:");
        string рядок = Console.ReadLine();

        string[] слова = рядок.Split(new char[] { ' ', '\t' }, StringSplitOptions.RemoveEmptyEntries);

        Console.WriteLine($"Кількість слів: {слова.Length}");
    }
}
