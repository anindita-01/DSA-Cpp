// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;


 int lengthOfLongestSubstring(string s) {
        int low=0,high=0,res=0;
        unordered_map<char,int> fr;
        for(high=0;high<s.length();high++){
            fr[s[high]]++;
            int k=high-low+1;
            while(fr.size()<k){
                fr[s[low]]--;
                if(fr[s[low]]==0){
                    fr.erase(s[low]);
                }
                low++;
                k=high-low+1;
            }
            res=max(res,high-low+1);

        }
        return res;
        
    }

int main() {
    string str;
    getline(cin,str);
    
cout<<lengthOfLongestSubstring(str)<<endl;
    return 0;
}