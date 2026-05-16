#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, sum=0; //can overflow, because abs(INT_MIN) cannot be represented in a signed int
    cin>>n;
    n=abs(n); //for negative numbers
    while(n>0){
        int ld= n%10;
        sum+=ld;
        n=n/10;
    }
cout << sum<< endl;
return 0;
}