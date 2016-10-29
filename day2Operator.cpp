#include <iostream>
#include <cmath>

using namespace std;
int main(){
    string tmp;
    
    getline(cin,tmp);
    double mealCost = stod(tmp);
    
    getline(cin,tmp);
    int tipPercent = stoi(tmp);
    
    getline(cin,tmp);
    int taxPercent = stoi(tmp);
    
    double tip = tipPercent*mealCost/100;
    double tax = taxPercent*mealCost/100;
    
    int totalCost = round(tip+tax+mealCost);
    
    cout<<"The total meal cost is "<<totalCost<<" dollars."<<endl;

}
