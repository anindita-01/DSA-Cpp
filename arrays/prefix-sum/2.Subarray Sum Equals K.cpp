// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.


#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

 int subarraySum(vector<int>& nums, int k){
    int sum=0,cnt=0;
    unordered_map<int,int> freq;
    freq[0]=1;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        int visited=freq[sum-k];
        cnt+=visited;
        freq[sum]++;
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
cout<<subarraySum(nums,k)<<endl;
   
    return 0;
}