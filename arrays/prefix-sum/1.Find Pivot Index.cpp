// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;



int pivotIndex(vector<int>& nums) {
        int left=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            int right=sum-left-nums[i];
            if(left==right) return i;
            left+=nums[i];
        }
        return -1;
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
cout<<pivotIndex(nums)<<endl;
    return 0;
}