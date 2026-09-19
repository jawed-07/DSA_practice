//  Linear arrays: memory representation, 
//Array operations: traversal, insertion, deletion, 
// sorting, searching and merging and their complexity analysis.


#include <iostream>
using namespace std;

int main(){
    int arr[]={10,20,50,8,74,95,34,9,5};
    int n=sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } //normal hm print krre

    cout<<endl;

    //reverse main krne ke liye

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }



    return 0;


}