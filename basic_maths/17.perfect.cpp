// A Perfect Number is a positive number that is equal to the sum of its proper divisors (excluding the number itself).

// Example: 6

// Proper divisors of 6:

// 1
// 2
// 3
// 1 + 2 + 3 = 6


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int og=n;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0) sum+=i;
    }
    if(sum==og) cout<<"perfect:)"<<endl;
    else cout<<"not perfect :("<<endl;

    return 0;
}