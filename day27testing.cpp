test cases:
5
4 3
-1 0 4 2
5 3
0 1 -2 -6 9
6 4
1 0 -3 4 5 7
7 5
0 -3 -2 -1 6 -8 9
8 6
2 -4 5 1 3 7 6 0
---------------------------------solution passed ----
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    cout<<"5"<<endl;
    cout<<"4 3"<<endl;
    cout<<"-1 0 4 2"<<endl;
    cout<<"5 3"<<endl;
    cout<<"0 1 -2 -6 9"<<endl;
    cout<<"6 4"<<endl;
    cout<<"1 0 -3 4 5 7"<<endl;
    cout<<"7 5"<<endl;
    cout<<"0 -3 -2 -1 6 -8 9"<<endl;
    cout<<"8 6"<<endl;
    cout<<"2 -4 5 1 3 7 6 0"<<endl;

    int t;
     cin >> t;




    while(t--){
    long int nos,pw;
    int students[10000];

         int arrived=0,notarrived=0;


        cin>>nos>>pw;

        for(int i=0;i<nos;i++)
        {
            cin>>students[i];
        }

        for(int j=0;j<nos;j++)
        {
            if(students[j]<=0){
                arrived++;
            }else{
                notarrived++;
            }
        }

        if(arrived>=pw){

            cout<<"NO"<<endl; // Class not cancelled
        }else{

            cout<<"YES"<<endl; // Class Cancelled
        }

    }


    return 0;
}
----solution 2
#include<iostream>
using namespace std;
int main(){
    cout<<"5"<<endl;
    cout<<"5 3"<<endl; cout<<"-1 90 999 100 0"<<endl;
    cout<<"4 2"<<endl; cout<<"0 -1 2 1"<<endl;
    cout<<"3 3"<<endl; cout<<"-1 0 1"<<endl;
    cout<<"6 1"<<endl; cout<<"-1 0 1 -1 2 3"<<endl;
    cout<<"7 3"<<endl; cout<<"-1 0 1 2 3 4 5"<<endl;
}
