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
    for(int i=1; i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

Node* insertKthposition(Node* head,int val, int k){
    if(head==NULL){
        if (k==1){
        return new Node(val);
        }
        else{
            return NULL;
        } 
    }
    if(k==1){
        return new Node(val, head);
    }
    
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            Node* x=new Node(val, temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}


void print(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    vector<int> arr = {12,45,87,34,90};
    Node* head=convertArr2LL(arr);
    head=insertKthposition(head, 70,2);
    print(head);
    return 0;
}