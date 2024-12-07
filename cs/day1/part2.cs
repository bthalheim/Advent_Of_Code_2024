using System;
using System.Collections.Generic;

class Program 
{

    static void Main(string[] args) 
    {

        List<int> right = new List<int>();
        List<int> left = new List<int>();

        Dictionary<int, int> table = new Dictionary<int, int>();


        string line;
        while ((line = Console.ReadLine()) != null && line != "") 
        {
            string[] parts = line.Split(new string[] {"  "}, StringSplitOptions.None);
            
            left.Add(int.Parse(parts[0]));
            right.Add(int.Parse(parts[1]));
        }

        int count = 0;

        for (int i = 0; i < left.Count; i++)
        {
            if (!table.ContainsKey(left[i]))
            {
                table[left[i]] = 0;
            } 

        }
        
        for (int i = 0; i < right.Count; i++)
        {
            if (table.ContainsKey(right[i]))
            {
                table[right[i]]++;
            }
        }


        for (int i = 0; i < left.Count; i++)
        {
            count += left[i] * table[left[i]];
        }


        Console.WriteLine(count);

    }

}









