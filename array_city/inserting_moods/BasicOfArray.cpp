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
}