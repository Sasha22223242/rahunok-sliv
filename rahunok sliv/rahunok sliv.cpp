using System;

class ��������
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        Console.WriteLine("������ �������:");
        string ����� = Console.ReadLine();

        string[] ����� = �����.Split(new char[] { ' ', '\t' }, StringSplitOptions.RemoveEmptyEntries);

        Console.WriteLine($"ʳ������ ���: {�����.Length}");
    }
}
