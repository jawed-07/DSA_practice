#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {10, 20, 30, 40, 50};

    cout << "Vector elements: ";

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << "\nSize: " << nums.size();
    cout << "\nFirst element: " << nums.front();
    cout << "\nLast element: " << nums.back();

    nums.push_back(60);

    cout << "\nAfter push_back: ";
    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}
