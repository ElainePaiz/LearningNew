#include <iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//above are all aready there
int n;
cin>>n;
for (int i=1;i<=n;i++) {
string str;
cin>>str;

for (int j = 0; j< str.length();j++) {
    if(j%2==0) cout<<str[j];
}
cout<<" ";

for (int j = 0; j< str.length();j++) {
    if(j%2!=0) cout<<str[j];
}
cout<<endl;
}
    return 0;
}
