/*Given an array of integers, return the maximum sum for a non-empty subarray (contiguous elements)
 with at most one element deletion. In other words, you want to choose a subarray and optionally delete one element 
 from it so that there is still at least one element left and the sum of the remaining elements is maximum possible.

Note that the subarray needs to be non-empty after deleting one element.

*/
#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int maximumSum(vector<int>& arr) {
        int no_delete=arr[0];
        int one_delete=INT_MIN;
        int res=arr[0];
        for(int i=1;i<arr.size();i++){
            int prev_one_delete= one_delete;
            int prev_no_delete=no_delete;
            no_delete=max((no_delete+arr[i]),arr[i]);
            int v2;
            if(prev_one_delete==INT_MIN) v2=arr[i];
            else v2=prev_one_delete+arr[i];
            one_delete=max(v2,prev_no_delete);
            res=max(res,max(one_delete,no_delete));
        }
        return res;
        
    }
int main() {
    
    string str;
    getline(cin,str);
    stringstream ss(str);
    vector<int> arr;
    string num;
    while(getline(ss,num,',')){
        arr.push_back(stoi(num));
    }
    cout<<maximumSum(arr)<<endl;
    return 0;
}