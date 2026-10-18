#include <iostream>
using namespace std;

int main(){
    //let's Create an array of size n;
    int n;
    cout<<"Enter size of arry: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    //lest print the arry (Linear Transaversal)
    cout<<"Array: ";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Lets reverse the array
    cout<<"Reversed Arrya: ";
    for(int i=n-1;i>=0;--i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Print even elements of array
    cout<<"Even Elements of Array: ";
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;

    //print odd elements of array
    cout<<"Odd Elements of Array: ";
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;

    //print sum, products of all elements of array
    int sum=0;
    int pro=1;
    for(int i=0; i<n;i++){
        sum+=arr[i];
        pro*=arr[i];
    }
    cout<<"Sum: "<<sum<<endl;
    cout<<"Product: "<<pro<<endl;

    //Copy Array
    int arr2[n];
    cout<<"Copied Array: ";
    for(int i=0; i<n;i++){
        arr2[i]=arr[i];
        cout<<arr2[i]<<" ";

    }
    cout<<endl;

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
}