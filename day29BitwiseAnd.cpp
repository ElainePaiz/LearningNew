#include <cmath>
#include <string>
#include <bitset>
#include <cstdlib>
#include <sstream>
#include <iostream>

using namespace std;

class Binary{
public:
    static long to(int decimal,int level=0){
        static stringstream binary;
        if(decimal==1){//terminating condition
            return 1;
        }

        binary<<to(decimal/2,level+1);
        if(level==0){
            static long result;
            binary<<(decimal%2);
            istringstream(binary.str())>>result;
            return result;
        }
        return (decimal%2);
    };
    static int from(int bin){//convert from binary to decimal
        int sum=0,exponent=0;

        while(bin != 0) {
            int remainder = bin%10;
            sum+=remainder*pow(2,exponent++);
            bin/=10;
        }

        return sum;
    };
};//end of class Binary


long getResult(int k, int n){
    long lastDigit,result;
    double m;//where k=2^m
    //Convert k to binary and determine last digit
    istringstream ldSS(bitset<1>(k).to_string());//specifying 1 bit only gives the last digit
    ldSS>>lastDigit;

    if(lastDigit==1){//means k>=3 thus k-1 always exist
        return result=k-1;//because  k-1 is maximum possible less than k, and is obtainable by switching of last digit of k    //note that k is always in the range since k<=N
    }
    m=log2((double) k);
    if( floor(m) == m){// k is of the form 2^m
        //check to see if 2^(m+1)-1 is in range
        result=( pow(2,m+1)-1 <= n ) ? k-1 : k-2;
    }else{
        bool RequiredNumberInRange=false;
        istringstream mySS(bitset<11>(k-1).to_string());
        int kless1Bin;
        mySS>>kless1Bin;
        //find rightmost 0 digit, or first 0 digit from right
        auto copy=kless1Bin;
        int additive=1;//never going to be the last digit which i so final value will never be 1
        while(copy!=0){
            int focusDigit=copy%10;
            if(focusDigit==0) break;
            additive*=10;
            copy/=10;
        }
        int requiredNumberBin=kless1Bin+additive;
        if(Binary::from(requiredNumberBin)<=n) RequiredNumberInRange=true;
        result=(RequiredNumberInRange)?k-1:k-2;
    }
    return result;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        //can determine result based on the size of k
        cout<<getResult(k,n)<<endl;
    }
    return 0;
}
