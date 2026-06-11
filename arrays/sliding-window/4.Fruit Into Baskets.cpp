/*You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees are represented 
by an integer array fruits where fruits[i] is the type of fruit the ith tree produces.

You want to collect as much fruit as possible. However, the owner has some strict rules that you must follow:

You only have two baskets, and each basket can only hold a single type of fruit. There is no limit on the amount of fruit each basket can hold.
Starting from any tree of your choice, you must pick exactly one fruit from every tree (including the start tree) while moving to the right.
 The picked fruits must fit in one of your baskets.
Once you reach a tree with fruit that cannot fit in your baskets, you must stop.
Given the integer array fruits, return the maximum number of fruits you can pick.*/


#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;


 int totalFruit(vector<int>& fruits) {
        int low=0,high=0,res=0;
        unordered_map<int,int> fr;
        for(high=0;high<fruits.size();high++){
            fr[fruits[high]]++;
            while(fr.size()>2){
                fr[fruits[low]]--;
                if(fr[fruits[low]]==0) fr.erase(fruits[low]);
                low++;

            }
            res=max(res,high-low+1);
            
        }
        return res;
        
    }

int main() {
    string str;
    getline(cin,str);
    stringstream ss(str);
    vector<int> arr;
    string nums;
    while(getline(ss,nums,' ')){
        arr.push_back(stoi(nums));
    }
cout<<totalFruit(arr)<<endl;
    return 0;
}