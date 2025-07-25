//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
       int maximumProfit(vector<int> &arr) {
        // code here
        int n=arr.size();
        int profit=0;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]>arr[i]){
                profit+=arr[i+1]-arr[i];
            }
        }
        return profit;
    }
};


//{ Driver
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int res = ob.maximumProfit(arr);
        cout << res;

        cout << "\n";
    }
    return 0;
}