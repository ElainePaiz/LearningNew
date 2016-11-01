using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        string[] a_temp = Console.ReadLine().Split(' ');
        int[] a = Array.ConvertAll(a_temp,Int32.Parse);

        int swaptimes = 0;

        for(int i = 0; i<n-1; i++)
            for( int j = 0; j<n-1-i; j++) {
            if(a[j]>a[j+1]) {
                            int tmp = a[j];
                                a[j]=a[j+1];
                                a[j+1] = tmp;
                                swaptimes +=1;
                            }
        }
        Console.WriteLine("Array is sorted in {0} swaps.",swaptimes);
        Console.WriteLine("First Element: {0}",a[0]);
        Console.WriteLine("Last Element: {0}",a[n-1]);

    }
}
