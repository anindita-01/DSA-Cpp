// Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.


#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;
int findMaxLength(vector<int>& nums) {
        int zero=0,one=0,ans=0;
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            else one++;
            int diff=zero-one;

            if(diff==0){
                ans=max(ans,i+1);
                continue;

            }
            if(freq.find(diff)==freq.end()){
                freq[diff]=i;
            }
            else{
                int idx=freq[diff];
                int length=i-idx;
                ans=max(ans,length);
            }
        }
        return ans;
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
  
cout<<findMaxLength(nums)<<endl;
   
    return 0;
}