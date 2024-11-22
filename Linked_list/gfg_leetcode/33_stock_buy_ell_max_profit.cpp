//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
            int profit=0;
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++){
           mini=min(mini,prices[i]);
            
            int currProfit=prices[i]-mini;
            profit=max(currProfit,profit);
            
        }
        return profit;
    }
};


//{ Driver Code 
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> prices;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            prices.push_back(number);
        }

        Solution ob;
        int ans = ob.maximumProfit(prices);
        cout << ans << endl;
    }
    return 0;
}

// } 