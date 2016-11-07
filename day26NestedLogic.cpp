#include <iostream>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int da, ma, ya;
    cin>>da>>ma>>ya;

    int de, me, ye;
    cin>>de>>me>>ye;

    int fine = 0;

    if(ya > ye) fine = 10000;
    else if(ya == ye) {
        if( ma>me) fine = (ma-me)*500;
        else if (ma == me && da > de) fine = (da - de)*15;
    }

    cout << fine;
    return 0;
}
