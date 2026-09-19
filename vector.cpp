// // push_back code

// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     for (const auto& x : v) {
//         std::cout << x << " ";
//     }
//     return 0;
// }




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