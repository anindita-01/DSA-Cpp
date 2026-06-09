//Given an array of positive integers nums and a positive integer target, return the minimal length of a 
// subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.
// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
        int low=0,high=0,res=INT_MAX,sum=0;
        int n=nums.size();
        for(high=0;high<n;high++){
            sum=sum+nums[high];
            while(sum>=target){
                int len=high-low+1;
                res=min(res,len);
                sum=sum-nums[low];
                low++;

            }
           
        }
        return (res == INT_MAX) ? 0 : res;
        
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
    cout<<minSubArrayLen(k,arr)<<endl;



    return 0;
}