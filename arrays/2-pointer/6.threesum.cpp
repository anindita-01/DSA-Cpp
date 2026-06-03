// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <sstream>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left=i+1;
            int right=n-1;
            int sum=-1*nums[i];
            while(left<right){
                int s=nums[left]+nums[right];
                if(s==sum){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1]) left++;
                    while(left<right && nums[right]==nums[right+1]) right--;


                }
                else if(s<sum) left++;
                else right--;
            }
        }
        return ans;
    }
int main() {
   string str;
   getline(cin,str);
   vector<int> nums;
   stringstream ss(str);
   string num;
   while(getline(ss,num,' ')){
    nums.push_back(stoi(num));
   }
   vector<vector<int>> ans =threeSum(nums);
   for(auto &ele:ans){
    cout<<'[';
     for(int i=0;i<ele.size();i++){
        cout<<ele[i];
        if(i<ele.size()-1) cout<<",";
     }
   
cout<<']';
   }

    return 0;
}