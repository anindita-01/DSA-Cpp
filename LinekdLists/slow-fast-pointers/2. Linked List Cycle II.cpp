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
        next=NULL;
    }
};


ListNode* Arr2LL(vector<int> &arr,int pos){
    if (arr.empty()) return NULL;
    ListNode* head= new ListNode(arr[0]);
    ListNode* mover=head;

    vector<ListNode*> nodes;
    nodes.push_back(head);


    for(int i=1;i<arr.size();i++){
        ListNode* temp=new ListNode(arr[i]);
        mover->next=temp;
        mover=temp;
        nodes.push_back(temp);
    }

    if(pos != -1) {
        mover->next = nodes[pos];
    }

    return head;

}

 ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!= NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;

            }
        }
       return NULL; 
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
    int pos;
    cin>>pos;
    ListNode* head=Arr2LL(arr,pos);

     ListNode* ans = detectCycle(head);

    if (ans != NULL)
        cout << "Cycle starts at node with value: " << ans->data << endl;
    else
        cout << "No cycle" << endl;



   
    
    return 0;
}