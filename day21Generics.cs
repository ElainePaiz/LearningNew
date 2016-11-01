using System;

public class Solution {
  //above has been written
  // Add your code here
   static void printArray<Element>(Element[] array)
       {
         foreach( var element in array)
             {
             Console.WriteLine(element);
         }
   }
  //below has been written
  static void Main(string[] args) {
      int[] vInt = new int[] {1, 2, 3};
      string[] vString = new string[] {"Hello", "World"};

      printArray<int>(vInt);
      printArray<string>(vString);
  }
}
