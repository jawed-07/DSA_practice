
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            int CurrentNum = nums[i];

            for (int j = 0; j < nums.size(); j++) {
                if (nums.at(j) == CurrentNum) {
                    count++;
                }
            }

            if (count == 1) {
                return CurrentNum;
            }
        }

        return -1;
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << obj.singleNumber(nums) << endl;

    return 0;
}
