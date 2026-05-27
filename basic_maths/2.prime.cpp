#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    if(n<=1){ 
        cout << "not prime" << endl;
        return 0;
    }
    // assume the no to be prime
    bool prime= true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){ // at any pt if there's another factor except 0 and itself, break
            prime=false;
            break;
        }
    }
    if(prime) cout<< "prime"<< endl;
    else cout<<"not prime"<< endl;
    return 0;
}


//method 2 easier

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=1) return false;
    else if(n==2) return true;
    else if(n%2==0) return false;
    else{
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0) return false;
        }
    }
    return true;
}
 int main(){
    int n;
    cin>> n;
    if(isPrime(n)) cout<<"prime"<<endl;
    else cout<<"not prime"<<endl;
    return 0;
 }