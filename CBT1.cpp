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
    cout<<endl;
    
    //max and min of arr
    int max=arr[0];
    for (int i=0;i<n;++i){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Max Ele of arr: "<<max<<endl;
    int min=arr[0];
    for(int i=0;i<n;++i){
        if(arr[i]<max){
            min=arr[0];
        }
    }
    cout<<"Min Ele of arr: "<<min<<endl;

    //Let's find 2nd Max and min of arr
    int min1=arr[0];
    int min2=arr[1];
    if(min1>min2){
        int temp=min1;
        min1=min2;
        min2=temp;
    }
    for (int i=2;i<n;++i){
        if(arr[i]<min1){
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i]<min2 && arr[i]!=min1){
            min2=arr[i];
            
        }
    }
    cout<<"Second Min of arr is: "<<min2<<endl;
    return 0;

}