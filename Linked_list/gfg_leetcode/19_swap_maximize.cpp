//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// long long int maxSum(int arr[], int n);

// } Driver Code Ends
class Solution {
  public:
       long long maxSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        long long sum = 0;
        int n = arr.size();
        for (int i = 0; i < n / 2; ++i) {
            sum += abs(arr[i] - arr[n - i - 1]) * 2;
        }

        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        string line;
        getline(cin, line); 
        stringstream ss(line);
        vector<int> arr;
        int num;

        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        long long ans = ob.maxSum(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
