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

Node* deleteHead(Node* head){
    if(head==NULL) return head;
    // head->data=head->next->data;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
    
}

Node* deleteTail(Node* head){
    if (head == nullptr) return nullptr; // If the list is empty, return nullptr

    if (head->next == nullptr) { // If there's only one node in the list
        delete head; // Delete the single node
        return nullptr; // Return nullptr as the new head
    }

    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
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
    head=deleteTail(head);
    print(head);
    return 0;
}