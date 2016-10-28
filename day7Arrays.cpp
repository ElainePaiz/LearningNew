#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
//above are all written there already
for ( p=arr.rbegin(); p!=arr.rend(); p++){
        cout<<*p<<" ";
    }

    return 0;
}
