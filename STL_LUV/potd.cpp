#include <iostream>
#include <vector>
#include <algorithm> // for std::min

using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        vector<int> v;

        if (nums.size() == 1) {
            // If there's only one element, repeat it k times with multiplier
            for (int i = 0; i < k; i++) {
                v.push_back(nums[0] * multiplier);
            }
        } else {
            // For more than one element, find the minimum k times
            for (int i = 0; i < k; i++) {
                int mini = nums[0]; // Assume first element is the smallest initially
                for (int j = 1; j < nums.size(); j++) {
                    mini = min(mini, nums[j]);
                }
                v.push_back(mini * multiplier); // Multiply the smallest element and add to result
            }
        }
        return v;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {5, 3, 9, 2, 7   };  // Example input array
    int k = 3;                           // Number of times to repeat
    int multiplier = 2;                  // Multiplier
    
    vector<int> result = sol.getFinalState(nums, k, multiplier);
    
    // Output the result
    cout << "Final state: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
