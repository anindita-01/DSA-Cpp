// An Armstrong number is a number that is equal to the sum of its digits each raised to the power of the total number of digits.

// Example:

// For 153:
// Number of digits = 3
// 1^3+5^3+3^3
// =1+125+27
// =153

// So, 153 is an Armstrong number.




#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int og=n;
    int sum=0;
    int digits= to_string(n).length();
    while(n>0){
        int ld=n%10;
        sum+= pow(ld,digits);
        n/=10;
    }
    if(sum==og) cout<<"armstrong"<<endl;
    else cout<<"not armstrong"<<endl;


    return 0;
}