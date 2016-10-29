#include <vector>
#include <iostream>

using namespace std;
vector<int> remainder(int n){
    vector<int> rmd;

    while (n!=0){
        rmd.push_back(n%2);
        n=n/2;
        remainder(n);
    }
   
    return rmd;
    
}
int main(){
    int n;
  //  cout<<"Please input n:"<<endl;
    cin >> n;
    vector<int> myStack;
    
    int sum=0,max=0;
    
    if (n==0) {myStack = {0};}
    else {
    myStack = remainder(n);
    }
    for(int i=0;i<myStack.size();i++)
    { //cout << myStack[i]<<endl;
        if (myStack[i]==1) {
            sum = sum +1;
            if (sum > max) {max = sum;}
        }
        else { sum = 0 ;
            if (sum > max) {max = sum;}}
            }
            
    cout<<max<<endl;
    
    return 0;
}
