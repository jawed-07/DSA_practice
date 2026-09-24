// //  Linear arrays: memory representation, 
// //Array operations: traversal, insertion, deletion, 
// // sorting, searching and merging and their complexity analysis.


// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={10,20,50,8,74,95,34,9,5};
//     int n=sizeof(arr) / sizeof(arr[0]);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     } //normal hm print krre

//     cout<<endl;
    
//     //reverse main krne ke liye
    
//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
//     //max and min of arr
//     int max=arr[0];
//     for (int i=0;i<n;++i){
//         if (arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"Max Ele of arr: "<<max<<endl;
//     int min=arr[0];
//     for(int i=0;i<n;++i){
//         if(arr[i]<max){
//             min=arr[0];
//         }
//     }
//     cout<<"Min Ele of arr: "<<min<<endl;
    
//     //Let's find 2nd Max and min of arr
//     int min1=arr[0];
//     int min2=arr[1];
//     if(min1>min2){
//         int temp=min1;
//         min1=min2;
//         min2=temp;
//     }
//     for (int i=2;i<n;++i){
//         if(arr[i]<min1){
//             min2=min1;
//             min1=arr[i];
//         }
//         else if(arr[i]<min2 && arr[i]!=min1){
//             min2=arr[i];
            
//         }
//     }
//     cout<<"Second Min of arr is: "<<min2<<endl;
//     //Second max of given arr
//     int max1=arr[0];
//     int max2=arr[1];
//     if(max1<max2){
//         int temp=max1;
//         max1=max2;
//         max2=temp;
//     }
//     for(int i=2;i<n;++i){
//         if(arr[i]>max1){
//             max2=max1;
//             max1=arr[i];
//         }
//         else if(arr[i]>max2 && arr[i]!=max1){
//             max2=arr[i];
            
//         }
//     }
//     cout<<"Second Max of arr is: "<<max2<<endl;
    
    
//     //bubble sort
//     for(int i=0;i<n-1;i++){
//         bool swaped=false;
//         for (int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swaped=true;
//             }
//         }
//         if(swaped==false){
//             break;
//         }
//     }
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     } //normal hm print krre
    
//     cout<<endl;
    
//     //Selection Sorting 

//     for(int i=0;i<n-1;i++){
//         int minIndex=i;
//         for(int j=i-1;j<n-i;j++){
//             if(arr[i]>arr[minIndex]){
//                 minIndex=j;
//             }
//         }
//         swap(arr[i],arr[minIndex]);
//     }
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     } //normal hm print krre
    
//     cout<<endl;
    
//     //Insertion SOrting
//     for (int i=1; i<n;i++){
//         while(i>0 && arr[i]<arr[i-1]){
//             int temp = arr[i];
//             arr[i]=arr[i-1];
//             arr[i-1]=temp;
//             i--;
//         }
//     }
//     for (int ele:arr)
//         cout<<ele<<" ";

    
//     return 0;
    
// }


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

int main() {
    Node* head = nullptr;

    // Insert at Front
    cout << "Inserting at Front: 10, 20, 30" << endl;
    for (int val : {10, 20, 30}) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    cout << "List after insert front: ";
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Insert at Back
    cout << "Inserting at Back: 40, 50" << endl;
    for (int val : {40, 50}) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    cout << "List after insert back: ";
    temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Find Middle
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Middle element: " << slow->data << endl;

    // Delete Middle
    if (head && head->next) {
        slow = head;
        fast = head;
        Node* prev = nullptr;

        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if (prev) {
            prev->next = slow->next;
            delete slow;
        }
    }

    cout << "List after deleting middle: ";
    temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Delete Second Last
    if (head && head->next && head->next->next) {
        temp = head;
        while (temp->next->next->next) {
            temp = temp->next;
        }

        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    cout << "List after deleting second last: ";
    temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Reverse Linked List
    Node* prev = nullptr;
    Node* curr = head;

    while (curr) {
        Node* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    head = prev;

    cout << "List after reversing: ";
    temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Cleanup memory
    while (head) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
    }

    return 0;
}



