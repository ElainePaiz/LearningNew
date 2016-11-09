using System;

class Solution {

    static void Main(String[] args) {
        int t = Convert.ToInt32(Console.ReadLine());
        for(int a0 = 0; a0 < t; a0++){
            string[] tokens_n = Console.ReadLine().Split(' ');
            int N = Convert.ToInt32(tokens_n[0]);
            int K = Convert.ToInt32(tokens_n[1]);

            int max = 0;

            for(int j=1;j<N;j++)
                {
                 for(int k = j+1; k<=N; k++)
                     {
                      int h= j&k;
                     if(h<K && max<h) max = h;
                 }
            }

            Console.WriteLine(max);
        }
    }
}
