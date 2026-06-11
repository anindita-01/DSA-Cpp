// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include <sstream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
        int slow=0;
        int fast=0;
        while(true){
            slow=nums[slow];
            fast=nums[fast];
            fast=nums[fast];
            if(slow==fast){
                slow=0;
                while(slow!=fast){
                    slow=nums[slow];
                    fast=nums[fast];
                }
                return slow;
            }
        }
       return -1; 
    }
int main() {
    string str;
    getline(cin,str);
    stringstream ss(str);
    vector<int> arr;
    string num;
    while(getline(ss,num,' ')){
        arr.push_back(stoi(num));
    }
cout<<findDuplicate(arr)<<endl;
    return 0;
}