/*You are given a string s and an integer k. You can choose any character of 
the string and change it to any other uppercase English character. You can perform this operation at most k times.

Return the length of the longest substring containing the same letter you can get after performing the above operations.

*/


#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int characterReplacement(string s, int k) {
        int low=0,high=0,res=0,maxFreq=0;
        vector<int> freq(26,0);
        for(high=0;high<s.length();high++){
            freq[s[high]-'A']++;
            maxFreq=max(maxFreq,freq[s[high]-'A']);
     
            while((high-low+1)-maxFreq>k){
                freq[s[low]-'A']--;
                low++;
            
            }
            res=max(res,high-low+1);
        }
        return res;
        
    }

int main() {
    string str;
    getline(cin,str);
    int k;
    cin>>k;
    
cout<<characterReplacement(str,k)<<endl;
    return 0;
}