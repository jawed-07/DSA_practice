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
    return 0;
}


