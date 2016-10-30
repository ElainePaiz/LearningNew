using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        int[][] arr = new int[6][];
        for(int arr_i = 0; arr_i < 6; arr_i++){
           string[] arr_temp = Console.ReadLine().Split(' ');
           arr[arr_i] = Array.ConvertAll(arr_temp,Int32.Parse);
        }
        var max = -9*7;
        for(int i = 1; i<=4; i++) {
            for(int j=1; j<=4; j++) {
                var sum = 0;
                sum = arr[i][j] + arr[i-1][j] + arr[i+1][j] + arr[i-1][j-1] + arr[i-1][j+1] + arr[i+1][j-1] + arr[i+1][j+1];
            if (sum >max) {max = sum;} 
            }
        }
        Console.WriteLine($"{max}");
    }
}

