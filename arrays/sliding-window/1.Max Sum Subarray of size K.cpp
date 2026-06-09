// Given an array of integers arr[]  and a number k. Return the maximum sum of a subarray of size k.


#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int maxSubArrayWithSumk(vector<int> &arr,int k){
    int low=0,high=k-1,sum=0;
    int n=arr.size();
    for(int i=low;i<=high;i++){
        sum=sum+arr[i];
    }
    int res=sum;
    while(high<n){
        low++;
        high++;
        if(high==n) break;
        sum=sum-arr[low-1]+arr[high];
        res=max(res,sum);
    }
    return res;
}


int main() {
    string str;
    getline(cin,str);
    stringstream ss(str);
    vector<int>arr;
    string num;
    while(getline(ss,num,' ')){
        arr.push_back(stoi(num));
    }
    int k;
    cin>>k;
    cout<<maxSubArrayWithSumk(arr,k)<<endl;



    return 0;
}