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

Node* insertBeforeGivenValue(Node* head, int val, int givenval){
    if(head==NULL){
        return NULL;
    }
    if(head->data==givenval){
        return new Node(val, head);
    }
    Node* temp=head;
    bool found=false;
    while(temp->next!=NULL){
        if(temp->next->data==givenval){
            Node* x= new Node(val, temp->next);
            temp->next=x;
            found=1;
            break;
        }
        temp=temp->next;
    }
    // if(found==false){
    cout<<"Given value not found in the linked list"<<endl;
    return head;
    // }

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
    head=insertBeforeGivenValue(head,30 ,34);
    print(head);
    return 0;
}