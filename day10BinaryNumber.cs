using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        List<int> r = new List<int>();
        r = remainder(n);
        int sum = 0, max = 0;
        
        foreach (int i in r)

            {
            if (i == 1) { sum = sum + 1 ;
                if (sum > max) { max = sum;}
            }  else { sum = 0 ;} 
            
             }
     Console.WriteLine("{0}",max);
                      }
                      
         
    static List<int> remainder(int n) {
        List<int> rmd = new List<int>();
        while(n!=0) {
           rmd.Add(n%2);
            n=n/2;
            remainder(n);
        } 
        return rmd;
    }
}
