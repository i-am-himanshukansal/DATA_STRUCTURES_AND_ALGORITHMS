//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
       vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    int n = arr.size(); 
    int i = 0; 
    int j; 
  
  while (i < n) {
    vector<int> ele = arr[i]; 
    j = i + 1; 
    while (j < n && arr[j][0] <= ele[1]) {
        ele[1] = max(ele[1], arr[j][1]);
        j++;
    }
    ans.push_back(ele);
    
    i = j; 
}
   
    return ans;
}
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<vector<int>> arr(n);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            arr[i].push_back(x);
            arr[i].push_back(y);
        }
        Solution obj;
        vector<vector<int>> ans = obj.mergeOverlap(arr);
        for (auto i : ans) {
            for (auto j : i) {
                cout << j << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends