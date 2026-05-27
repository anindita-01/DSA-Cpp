#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long sum=0;
    cin>>n;
    if(n<0) return 0; //no negatives
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;

    return 0;
}