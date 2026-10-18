#include <iostream>
using namespace std;

int main(){
    int arr[]={45,24,7,85,167,45,12,45,32};
    int n=sizeof(arr)/sizeof(arr[0]);
    //print max and min of array
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Biggest element of the array: "<<max<<endl;
    cout<<"Smallest element of the array: "<<min<<endl;

    //les's print 2nd max and 2nd min of array
    int min1=arr[1];
    int min2=arr[0];
    if(min1<min2){
        swap(min1,min2);
    }
    for(int i=2;i<n;i++){
        if(arr[i]<min1){
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i]<min2 && arr[i]!=min1){
            min2=arr[i];
        }
    }
    cout<<"Second Smallest element of the array: "<<min2<<endl;

    //Now let's find 2nd max of array
    int max1=arr[0];
    int max2=arr[1];
    if(max1>max2){
        swap(max1,max2);
    }

    for(int i=2;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max1){
            max2=arr[i];
        }
    }
    cout<<"Second Biggest element of the array: "<<max2<<endl;
    return 0;
}