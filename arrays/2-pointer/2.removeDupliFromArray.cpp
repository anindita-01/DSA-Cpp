/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. 
The relative order of the elements should be kept the same.

Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.

*/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        while(j<nums.size()){
        
            if(nums[j]>nums[i]){
                i++;
                swap(nums[i],nums[j]);

            }
            j++;
        }
        return i+1;
    }



    int main(){
      string str;
      getline(cin,str);
      vector<int> arr;
      stringstream ss(str);
      string num;
      while(getline(ss,num,' ')){
        arr.push_back(stoi(num));
      }
     cout<<removeDuplicates(arr)<<endl;

        return 0;
    }