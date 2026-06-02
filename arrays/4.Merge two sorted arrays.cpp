/*Given two integer arrays nums1 and nums2. Both arrays are sorted in non-decreasing order.



Merge both the arrays into a single array sorted in non-decreasing order.



The final sorted array should be stored inside the array nums1 and it should be done in-place.


nums1 has a length of m + n, where the first m elements denote the elements of nums1 and rest are 0s.


nums2 has a length of n.*/
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
            }
            k--;
        }
        while(j>=0){
              nums1[k]=nums2[j];
                j--;
                k--;
        }
        
    }

    int main(){
        string str;
      getline(cin,str);
      vector<int> nums1;
      stringstream ss(str);
      string num;
      while(getline(ss,num,' ')){
        nums1.push_back(stoi(num));
      }

      string str2;
      getline(cin,str2);
      vector<int> nums2;
      stringstream ss2(str2);
      string num2;
      while(getline(ss2,num2,' ')){
        nums2.push_back(stoi(num2));
      }
int m, n;
cin >> m >> n;
      merge(nums1,m,nums2,n);
      for(int ele:nums1){
        cout<<ele<<endl;
      }
        return 0;
    }