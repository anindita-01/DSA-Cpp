// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
   int num,rev=0;
   cin>>num;
   if(num==0) return 0;
   while(num>0){
    int ld=num%10;
    rev=(rev*10)+ld;
    num=num/10;
   }
   cout<< rev<<endl;

 return 0;
}