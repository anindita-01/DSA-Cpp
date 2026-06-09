/*You are given a string s consisting only lowercase alphabets and an integer k.
 Your task is to find the length of the longest substring that contains exactly k distinct characters.

Note : If no such substring exists, return -1. */
#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include <unordered_map>
using namespace std;

int longestKSubstr(string &s, int k) {
        int low=0,high=0,res=-1;
        unordered_map<char,int> freq;
        for(high=0;high<s.length();high++){
            freq[s[high]]++;
            while(freq.size()>k){
                freq[s[low]]--;
                if(freq[s[low]]==0) freq.erase(s[low]);
                low++;
            }
            if(freq.size()==k){
                int len=high-low+1;
                res=max(res,len);
            }
            
        }
        return res;
        
    }

int main() {
    string str;
    getline(cin,str);
    int k;
    cin>>k;
    cout<<longestKSubstr(str,k)<<endl;



    return 0;
}