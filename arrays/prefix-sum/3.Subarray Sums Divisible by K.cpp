// Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.
#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

    int subarraysDivByK(vector<int>& nums, int k) {
     int sum=0,cnt=0;
     unordered_map<int,int> freq;
     freq[0]=1; // count the empty subarray
     for(int i=0;i<nums.size();i++)
     {
        sum+=nums[i];
        int rem=sum%k;
        if(rem<0) rem+=k; //if rem is negative just add k to it
        cnt+=freq[rem]; 
        freq[rem]++;
             }
return cnt;
    }

int main() {
   string str;
  getline(cin,str);
  stringstream ss(str);
  vector<int> nums;
  string num;
  while(getline(ss, num,',')){
    nums.push_back(stoi(num));
  }
  int k;
  cin>>k;
cout<<subarraysDivByK(nums,k)<<endl;
   
    return 0;
}