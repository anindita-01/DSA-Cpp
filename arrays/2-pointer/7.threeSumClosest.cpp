
#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <sstream>
using namespace std;

 int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int closest= nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                int currsum=nums[i]+nums[left]+nums[right];
                if(abs(currsum-target)<abs(closest-target)) closest=currsum;
            
            if(currsum==target) return target;
            else if(currsum<target) left++;
            else right--;
            }
        }
        return closest;
        
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
   int target;
   cin>>target;
   
cout<<threeSumClosest(nums,target)<<endl;
   

    return 0;
}