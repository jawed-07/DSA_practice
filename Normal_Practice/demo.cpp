#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={40,20,30,50,10,80};
    cout<<"Size of vector: "<<arr.size()<<endl;
    cout<<arr[arr.size()-1]<<" "<<arr.back()<<endl;
    arr.push_back(100);
    arr.pop_back();
    cout<<"Size of vector: "<<arr.size()<<endl;
    cout<<*arr.begin()<<endl;
    arr.erase(arr.begin());
    for (int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}