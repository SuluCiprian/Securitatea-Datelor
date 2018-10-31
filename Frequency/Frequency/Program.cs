using System;

namespace Frequency
{
    class Program
    {
        static void Main(string[] args)
        {
            string inputText;
            int[] appearances = new int[200];
            float frequency;
            int noLetters = 0;
            inputText = Console.ReadLine();

            foreach (var letter in inputText)
            {
                if (letter != ' ')
                {
                    appearances[Convert.ToInt32(letter)]++;
                    noLetters++;
                }
            }

            foreach (var letter in inputText)
            {
                frequency = (float) appearances[Convert.ToInt32(letter)] / noLetters;
                if (letter != ' ')
                {
                    Console.WriteLine(letter + " - " + frequency);
                }
            }
        }
    }
}
