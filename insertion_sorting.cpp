#include <bits\stdc++.h>
using namespace std;

int main(){
    int arr[]={40,20,30,50,10,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=1; i<n;i++){
        while(i>0 && arr[i]<arr[i-1]){
            int temp = arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
            i--;
        }
    }
    for (int ele:arr)
        cout<<ele<<" ";

}
