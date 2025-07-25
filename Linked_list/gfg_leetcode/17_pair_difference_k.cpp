//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



class Solution {
  public:
    int countPairsWithDiffK(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int count=0;
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for (auto pair : mp) 
        {
            int x = pair.first;
            int freqX = pair.second;
            int target = x + k;

            
            if (mp.find(target) != mp.end()) 
            {
                count += freqX * mp[target];
            }
        }
        return count;
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        auto ans = ob.countPairsWithDiffK(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

