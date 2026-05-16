#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   
    int og=n;
    long long rev=0;
    while(n>0){
        int ld=n%10;
        rev=rev*10 +ld;
        n=n/10;

    }
    if(rev==og) cout<<"palindrome"<< endl;
    else cout<<"not palindrome"<<endl;
    
}