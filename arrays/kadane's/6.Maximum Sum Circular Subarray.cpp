// Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.

#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


int maxSubArray(vector<int>& nums) {
        int best=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=best+nums[i];
            int v2=nums[i];
            best=max(v1,v2);
            ans=max(ans,best);
        }
        return ans;
        
    }

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


    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum=maxSubArray(nums);


        // all elements negative
        if(maxSum < 0)
            return maxSum;

        int minSum=minSubArray(nums);
        int sum=0;
        for(int i=0;i<nums.size();i++){
             sum=sum+nums[i];
        }
  
        return max(maxSum,sum-minSum);

        
    }
    
int main() {
   string str;
    getline(cin,str);
    stringstream ss(str);
    vector<int> nums;
    string num;
    while(getline(ss,num,',')){
        nums.push_back(stoi(num));
    }
    cout<<maxSubarraySumCircular(nums)<<endl;
    return 0;
}