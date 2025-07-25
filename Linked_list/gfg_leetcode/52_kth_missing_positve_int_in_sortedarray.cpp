//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  int kthMissing(vector<int> &arr, int k) {
        int left = 0 ;
        int right = arr.size()-1;
        int ind = -1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(arr[mid]-mid-1<k){
                ind = mid;
                left = mid+1;
            }
            else{
                right=mid-1;
            }
        }
        // cout<<ind<<" ";
        if(ind==-1)
        return k;
        return k+ind+1;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.kthMissing(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
