// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
// both +ve and -ve values

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
 vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int i=0,j=n-1,k=n-1;
        while(i<=j){
            if(abs(nums[i])>abs(nums[j])){
                ans[k]=nums[i]*nums[i];
                i++;
            }else{
                ans[k]=nums[j]*nums[j];
                j--;
            }
            k--;
        }
        return ans;
        
    }

    int main(){
        string str;
      getline(cin,str);
      vector<int> nums;
      stringstream ss(str);
      string num;
      while(getline(ss,num,' ')){
        nums.push_back(stoi(num));
      }
vector<int> ans=sortedSquares(nums);
    
      for(int ele:ans){
        cout<<ele<<endl;
      }
        return 0;
    }