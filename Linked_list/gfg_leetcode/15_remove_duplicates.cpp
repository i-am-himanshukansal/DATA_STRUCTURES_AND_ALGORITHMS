//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        std::vector<int> ans;
        std::unordered_set<int> seen;
        
        for (int num : arr) {
            // Add to answer if not seen before
            if (seen.find(num) == seen.end()) {
                ans.push_back(num);
                seen.insert(num);
            }
        }
        return ans;
    }
};


int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.removeDuplicate(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

