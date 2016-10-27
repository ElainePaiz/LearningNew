#include <iostream>
int main(){
    int N;
    cin >> N;
    if (N%2 == 1) cout<<"Weird"<<endl;
    else {
          if(N>=2 && N<=5) cout<<"Not Weird";
            else {
                  if(N<=20) cout<<"Weird";
                      else cout<<"Not Weird";
                 };
         } ;
    return 0;
}
