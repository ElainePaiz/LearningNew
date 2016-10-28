#include <map>
#include <iostream>
using namespace std;
int main() {
   int N;
   cin >> N;
   cin.ignore();
     map<string, int> phone_book;
     string name;
     for (int i = 0; i < N; i++) {
         cin >> name;
         if (!phone_book[name]) {
             cin >> phone_book[name];
         }
     }
     while(cin>>name) {
         if(phone_book.find(name)!=phone_book.end()) {
             cout<<name<<"="<<phone_book.find(name)->second<<endl;
         }
         else {
             cout<<"Not found"<<endl;
         }
     }
     return 0;
 }
