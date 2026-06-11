// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include <climits>


using namespace std;

bool func(vector<int>& fors,vector<int>& fort){
    for(int i=0;i<256;i++){
        if(fors[i]<fort[i]) return false;
    }
    return true;
}
    string minWindow(string s, string t) {
        int low=0,high=0,res=INT_MAX,start=0;
        vector<int> fors(256,0);
        vector<int> fort(256,0);
        for(char c: t) fort[c]++;
        for(high=0;high<s.length();high++){
            fors[s[high]]++;
            while(func(fors,fort)){
                int len=high-low+1;
                if(res>len){
                    res=len;
                    start=low;
                    
                }
           
                fors[s[low]]--;
                low++;
            }

        }
        return (res==INT_MAX)? "" : s.substr(start,res);
    }

int main() {
    string str1;
    getline(cin,str1);
    string str2;
    getline(cin,str2);
    
    
cout<<minWindow(str1,str2)<<endl;
    return 0;
}




//method 2 better

#include <iostream>
#include <string>
#include <vector>
#include <climits>

using namespace std;

string minWindow(string s, string t) {
    int low = 0, res = INT_MAX, start = 0;

    vector<int> fors(256, 0);
    vector<int> fort(256, 0);

    for (char c : t) fort[c]++;

    int required = t.length();
    int formed = 0;

    for (int high = 0; high < s.length(); high++) {
        fors[s[high]]++;

        if (fort[s[high]] > 0 && fors[s[high]] <= fort[s[high]]) {
            formed++;
        }

        while (formed == required) {
            int len = high - low + 1;

            if (len < res) {
                res = len;
                start = low;
            }

            fors[s[low]]--;

            if (fort[s[low]] > 0 && fors[s[low]] < fort[s[low]]) {
                formed--;
            }

            low++;
        }
    }

    return (res == INT_MAX) ? "" : s.substr(start, res);
}

int main() {
    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);

    cout << minWindow(str1, str2) << endl;

    return 0;
}