#include <iostream>
using namespace std;
bool checkPal(int n){
    if(n<0) return false;
    int og=n;
    long long rev=0;
    while(n>0){
        int ld=n%10;
        rev=rev*10+ld;
        n/=10;
    }
    if(rev==og) return true;
    else return false;
    
}
int main(){
    int s,e;
    cin>>s>>e;
    for(int i=s;i<=e;i++){
        if(checkPal(i)) cout<<i<<" ";
    }
    
    return 0;
}