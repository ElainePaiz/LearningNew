#include <iostream>
using namespace std;
//but I have to add a function ahead of the main

int factorial(int n) {
    if(n==1) return 1;
    return factorial(n-1)*n;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin>>N;

    cout<<factorial(N);
    return 0;
}
