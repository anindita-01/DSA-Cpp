#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    //if 0
    if(n==0) {
        cout<<"infinity"<<endl;
         return 0;
         }

    //for non zero
    n=abs(n);
    vector<int> arr;
    arr.push_back(1);
    for(int i=2;i<=n;i++){
        if(n%i==0) arr.push_back(i);
    }
    for(int ele: arr) cout<<ele<<" ";
    return 0;
}