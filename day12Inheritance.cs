using System;

class Person{
	protected string firstName;
	protected string lastName;
	protected int id;

	public Person(){}
	public Person(string firstName, string lastName, int identification){
			this.firstName = firstName;
			this.lastName = lastName;
			this.id = identification;
	}
	public void printPerson(){
		Console.WriteLine("Name: " + lastName + ", " + firstName + "\nID: " + id);
	}
}
//this class has been given
//the only part we need to write is below:
class Student : Person{
    private int[] testScores;

    public Student() {}
    public Student(string firstName, string lastName, int id, int[] scores):base(firstName,lastName,id) {
        this.testScores = scores;
    }
    public char calculate() {
        int total = 0;
        foreach(int s in testScores)
            total = total + s;

        int avg = total/this.testScores.Length;
        if(avg>=90 && avg<=100) return 'O';
        if(avg>=80 && avg<90) return 'E';
        if(avg>=70 && avg<80) return 'A';
        if(avg>=55 && avg<70) return 'P';
        if(avg>=40 && avg<55) return 'D';
        return 'T';
    }
}
//below has been given too
class Solution {
	static void Main() {
		string[] inputs = Console.ReadLine().Split();
		string firstName = inputs[0];
	  	string lastName = inputs[1];
		int id = Convert.ToInt32(inputs[2]);
		int numScores = Convert.ToInt32(Console.ReadLine());
		inputs = Console.ReadLine().Split();
	  	int[] scores = new int[numScores];
		for(int i = 0; i < numScores; i++){
			scores[i]= Convert.ToInt32(inputs[i]);
		}

		Student s = new Student(firstName, lastName, id, scores);
		s.printPerson();
		Console.WriteLine("Grade: " + s.calculate() + "\n");
	}
}
