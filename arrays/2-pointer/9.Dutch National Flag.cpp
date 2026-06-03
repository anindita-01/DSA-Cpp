// sort 0s, 1s and 2s


#include <iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;


int main() {
    string str;
    getline(cin,str);
    vector<int> arr;
    stringstream ss(str);
    string num;
    while(getline(ss, num, ' ')){
        arr.push_back(stoi(num));
    }
    int n=arr.size();

    int low=0, mid=0, high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;

        }
        else if (arr[mid]==1){
            mid++;

        }
        else{
            swap(arr[mid],arr[high]);
            high--;

        }
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
    
    
    return 0;
}