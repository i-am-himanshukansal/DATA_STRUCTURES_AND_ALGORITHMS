//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  vector<int> search(string& pat, string& txt) {
        // code here
        int x = pat.size();
        vector<int>ans;
        if(pat==txt){
            ans.push_back(0);
            return ans;
        }
        for(int i=0;i<txt.size()-x+1;i++){
            
            if(pat[0]!=txt[i]){
                continue;
            }
            string subs = txt.substr(i,x);
            if(subs==pat){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}