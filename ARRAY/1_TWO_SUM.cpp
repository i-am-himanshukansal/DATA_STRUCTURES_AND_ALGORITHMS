// himanshukansal101 ------------> leetcode
// himanshukansal_iiitu ----------> geek for geek
// https://www.linkedin.com/in/himanshu-kansal-0493a223a/      -----> linkedin
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> twosumindices;
       
        for(int i = 0; i < nums.size() - 1; i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    twosumindices.push_back(i);
                    twosumindices.push_back(j);
                    return twosumindices;
                }
            }
        }
        return twosumindices;
    }
};

int main() {
    cout<<"two sum problem has solve : "<<endl;
    Solution solution;
    int numCases = 8;
    int n, target;

    for (int t = 0; t < numCases; ++t) {
        cout << "Test case " << t + 1 << ":" << endl;

        cout << "Enter the number of elements in the array: ";
        cin >> n;

        vector<int> nums(n);

        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        cout << "Enter the target value: ";
        cin >> target;

        vector<int> result = solution.twoSum(nums, target);

        if (!result.empty()) {
            cout << "Indices: " << result[0] << ", " << result[1] << endl;
        } else {
            cout << "No solution found." << endl;
        }

        cout << "-----------------------------" << endl;
    }

    return 0;
}
