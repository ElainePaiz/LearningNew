#include <iostream>
using namespace std;

int main(){
    try {
    string S;
    cin >> S;

    int num = stoi(S);
    cout<<num;
    }
    catch(exception) {
        cout<<"Bad String";
    }
    return 0;

}
