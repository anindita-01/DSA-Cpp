// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include <sstream>
#include<vector>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;

    ListNode(int x){
        data=x;
        next= NULL;

    }
};

ListNode* Arr2LL(vector<int> &arr){
    ListNode* head= new ListNode(arr[0]);
    ListNode* mover= head;
    for(int i=1;i<arr.size();i++){
        ListNode* temp= new ListNode(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

}

ListNode* middleNode(ListNode* head) {
     ListNode* slow=head;
     ListNode* fast=head;
     while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
     }
     return slow;
    }

int main() {
    string str;
    getline(cin,str);
    stringstream ss(str);
    vector<int> arr;
    string num;
    while(getline(ss,num,' ')){
        arr.push_back(stoi(num));
    }

    ListNode* head=Arr2LL(arr);
    ListNode* mid= middleNode(head);
    
    while(mid!= NULL){
        cout<<mid->data<<" ";
        mid=mid->next;
    }
    return 0;
}