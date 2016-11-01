#include <iostream>
#include <vector>

using namespace std;
//Above is already be written
// Add your code here
template<class Element>
    void printArray(vector<Element> arr) {
    for (int i=0; i<arr.size(); i++)
        cout<<arr[i]<<endl;
}
//below has been written already
int main() {

    vector<int> vInt{1, 2, 3};
    vector<string> vString{"Hello", "World"};

    printArray<int>(vInt);
    printArray<string>(vString);

    return 0;
}
