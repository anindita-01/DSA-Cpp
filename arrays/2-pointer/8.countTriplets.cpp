/*Given an array arr[] of distinct integers and a value sum,
 find the count of triplets (i, j, k), having (i<j<k) with the sum of (arr[i] + arr[j] + arr[k]) smaller than the given value sum.

Examples :

Input: sum = 2, arr[] = [-2, 0, 1, 3]
Output:  2
Explanation: Triplets with sum less than 2 are (-2, 0, 1) and (-2, 0, 3). */

// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int countTriplets(int sum, vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){

            int currsum=arr[i]+arr[left]+arr[right];
            if(currsum >=sum) right--;
            else{
                ans=ans+(right-left);
                left++;
            }
            }
        }
        return ans;
    }
int main() {
    string str;
    getline(cin,str);
    replace(str.begin(),str.end(),',',' '); // handles inputs like -2, 0, 1, 3
    vector<int> arr;
    stringstream ss(str);
    int x;
    while(ss>>x){
        arr.push_back(x);
    }
    int target;
    cin>>target;
    cout<<countTriplets(target,arr)<<endl;
    return 0;
}


// Input: sum = 2, arr[] = -2, 0, 1, 3
// Output:  2