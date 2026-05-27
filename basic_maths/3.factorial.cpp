#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n<=1) return 1;
    return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<< fact(n)<< endl;
    return 0;
}


//method 2 easier

#include <bits/stdc++.h>
using namespace std;

 int main(){
    int n;
    cin>> n;
    int fact=1;
    for(int i=n;i>=1;i--){
        fact=fact*i;

    }
    cout<<fact<<endl;
   
    return 0;
 }