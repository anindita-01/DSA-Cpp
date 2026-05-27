#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    if(n<=1) return 0;
    for(int i=2;i<=n;i++){ //2 to n ie each no from 2 to n
        int cnt=0;
        for(int j=1; j*j<=i;j++){ // for 2, it checks prime or not
            if(i%j==0) {
                cnt++;
                if(i/j!=j) cnt++;
            }
             }
             if(cnt==2) cout<<i<<" ";
       
    }


    return 0;
}