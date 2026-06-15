// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


int maxsum(vector<int>& nums){
    int best_ending=nums[0];
    int ans=nums[0];
    for(int i=1;i<nums.size();i++){
        int v1=best_ending+nums[i];
        int v2=nums[i];
        best_ending=max(v1,v2);
        ans=max(ans,best_ending);
    }
return abs(ans);
}
int minsum(vector<int>& nums){
    int best_ending=nums[0];
    int ans=nums[0];
    for(int i=1;i<nums.size();i++){
        int v1=best_ending+nums[i];
        int v2=nums[i];
        best_ending=min(v1,v2);
        ans=min(ans,best_ending);
    }
return abs(ans);
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
    cout<<max(maxsum(nums),minsum(nums))<<endl;
    return 0;
}