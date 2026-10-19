#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=0; i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int lengthOfLL(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
        cnt++;
    }
    return cnt; 
}

int main(){
    vector<int> arr = {12,45,87,34,90};
    Node* head=convertArr2LL(arr);
    cout<<endl<<"Length of LL: "<<lengthOfLL(head)<<endl;
    return 0;
}