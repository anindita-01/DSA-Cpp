#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int base, power;
    cin>>base>>power;
    int result= pow(base,power);
    cout<<result<<endl;

    return 0;
}



//without pow function

#include<iostream>

using namespace std;
int main(){
    int base, power;
    cin>>base>>power;
    int result=1;
    for(int i=1;i<=power;i++){
         result=result*base;
    }
    cout<<result<<endl;

    return 0;
}