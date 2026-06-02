/*Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order,
 find two numbers such that they add up to a specific target number. Let these two numbers be
  numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers index1 and index2, each incremented by one, as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

Your solution must use only constant extra space. */




#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while(i<j){
            int sum=0;
            sum=numbers[i]+numbers[j];
            if(sum==target) return {i+1,j+1};
            else if(sum<target){
                i++;
            }
            else j--;
        }
        return {-1,-1};
        
    
    }

    int main(){
      string str;
      getline(cin,str);
      int target;
      cin>>target;
      vector<int> arr;
      stringstream ss(str);
      string num;
      while(getline(ss,num,' ')){
        arr.push_back(stoi(num));
      }
     vector<int> res= twoSum(arr,target);
     for(int ele:res){
        cout<<ele<<endl;
     }


        return 0;
    }