using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
/* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */
//above is something already there
var n =int.Parse(Console.ReadLine());

for (var i=0;i<n;i++){
    var str = Console.ReadLine();
    for(var j=0; j<str.Length; j++){
        if (j%2==0) Console.Write(str[j]);
    }

    Console.Write(" ");

    for(var j=0; j<str.Length; j++){
        if (j%2!=0) Console.Write(str[j]);
    }
    Console.WriteLine();
}

    }
}
