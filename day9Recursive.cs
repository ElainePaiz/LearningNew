using System;
using System.Collections.Generic;

class Solution {
    static void Main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */
        var n=int.Parse(Console.ReadLine());
        Console.WriteLine(factorial(n));

    }

    static int factorial(int n) {
        if(n==1) return 1;
        return factorial(n-1)*n;
    }
}
