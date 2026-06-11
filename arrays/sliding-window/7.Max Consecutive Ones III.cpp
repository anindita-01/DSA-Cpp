//Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int longestOnes(vector<int>& nums, int k) {
        int low=0,high=0,res=0,zeroes=0;
        for(high=0;high<nums.size();high++){
            if(nums[high]==0) zeroes++;
            while(zeroes>k){
                if(nums[low]==0) zeroes--;
                low++;
            }
            res=max(res,high-low+1);
        }
return res;
        
    }

int main() {
    string str;
    getline(cin,str);
    stringstream ss(str);
    vector<int>arr;
    string nums;
    while(getline(ss,nums,',')){
        arr.push_back(stoi(nums));
    }

    int k;
    cin>>k;
    
cout<<longestOnes(arr,k)<<endl;
    return 0;
}