// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<unordered_map>

using namespace std;

 int firstUniqChar(string s) {
        int n=s.size();
        unordered_map<char,int> freq;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(freq[s[i]]==1) return i;
        }
       return -1; 
    }
int main() {
    string s;
    getline(cin,s);
    cout<<firstUniqChar(s)<<endl;
    return 0;
}