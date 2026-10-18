#include <iostream>
using namespace std;

int main(){
    // 1. Print all elements: Display every element row by row.
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // 2. Print row-wise sums: Find the sum of each row.
    for(int i=0;i<3;i++){
        int sum=0;
        for (int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<"Sum of"<<i+1<<" row is: "<<sum<<endl;
    }
    // 3. Print column-wise sums: Find the sum of each column.
    for(int i=0; i<3;i++){
        int sum =0;
        for (int j=0;j<3;j++){
            sum+=arr[j][i];
        }
        cout<<"Sum of column "<<i+1<<" is: "<<sum<<endl;
    }
    return 0;
}

// 4. Find the maximum: Print the largest element in the matrix.
// 5. Find the diagonal sum: Calculate \(1+5+9\).
// More questions:
// 6. Find the sum of all even elements.
// 7. Count the odd and even elements.
// 8. Print the matrix in reverse row order.
// 9. Search for a target value and print its position.
// 10. Find the transpose of a matrix.
// 3. Level 2 — Intermediate matrix questions
// 11. Print the primary and secondary diagonals.
// 12. Find the sum of the boundary elements.
// 13. Check whether a matrix is an identity matrix.
// 14. Check whether a matrix is symmetric.
// 15. Find the largest element in each row.
// 16. Find the smallest element in each column.
// 17. Rotate a square matrix 90° clockwise.
// 18. Print a matrix in spiral order.
// 19. Search in a row-wise and column-wise sorted matrix.
// 20. Set matrix rows and columns to zero when an element is zero.