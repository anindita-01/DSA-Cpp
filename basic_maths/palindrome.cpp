// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
  int num, og, rev=0;
  cin>>num;
  if(num==0) return true;
  og=num;
  while(num>0){
    int ld=num%10;
    rev=(rev*10)+ld;
    num=num/10;

  }
  if(rev==og) cout<< "true"<<endl;
  else cout<< "false"<< endl;
 return 0;
}


//another

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool checkpal(int num){
    int rev=0;
    if(num==0) return true;
  int og=num;
  while(num>0){
    int ld=num%10;
    rev=(rev*10)+ld;
    num=num/10;

  }
  if(rev==og) return true;
  else return false;
}
int main() {
    // Write C++ code here
  int num;
  cin>>num;
  checkpal(num)?cout<<1<<endl:cout<<0<<endl;
 return 0;
}