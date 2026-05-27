#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    n=abs(n);
    int mini=9, maxi=0;
    if(n==0) mini=maxi=0;
    while(n>0){
        int ld=n%10;
        if(ld>maxi) maxi=ld;
        if(ld<mini) mini=ld;
        n/=10;

    }
    cout<<"mini="<<mini << " and"<< " maxi="<<maxi<<endl;


    return 0;
}