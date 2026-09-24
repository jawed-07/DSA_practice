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




