using System;
using System.Collections.Generic;

class Program 
{

    static void Main(string[] args) 
    {

        List<int> right = new List<int>();
        List<int> left = new List<int>();


        string line;
        while ((line = Console.ReadLine()) != null && line != "") 
        {
            string[] parts = line.Split(new string[] {"  "}, StringSplitOptions.None);
            
            right.Add(int.Parse(parts[1]));
            left.Add(int.Parse(parts[0]));

        }

        right.Sort();
        left.Sort();

        int count = 0;

        for (int i = 0; i < right.Count; i++)
        {
            count += Math.Abs(right[i]-left[i]); 
        }

        Console.WriteLine(count);

    }


}









