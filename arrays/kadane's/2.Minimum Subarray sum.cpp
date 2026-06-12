// Given an integer array nums, find the subarray with the largest sum, and return its sum.
#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

int minSubArray(vector<int>& nums) {
        int best=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=best+nums[i];
            int v2=nums[i];
            best=min(v1,v2);
            ans=min(ans,best);
        }
        return ans;
        
    }

int main() {
    
    string str;
    getline(cin,str);
    stringstream ss(str);
    vector<int> arr;
    string nums;
    while(getline(ss,nums,',')){
        arr.push_back(stoi(nums));
    }
cout<<minSubArray(arr)<<endl;

    return 0;
}