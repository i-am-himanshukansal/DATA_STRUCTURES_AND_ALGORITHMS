#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t, n;
    string b;
    cin >> t;
    while (t--) {
        cin >> n >> b;
        
        set<char> unique_chars(b.begin(), b.end());
        string r(unique_chars.begin(), unique_chars.end());
        
        unordered_map<char, char> mapping;
        int m = r.size();
        for (int i = 0; i < m; ++i) {
            mapping[r[i]] = r[m - 1 - i];
        }
        
        string s;
        for (char c : b) {
            s += mapping[c];
        }
        
        cout << s << "\n";
    }
    
    return 0;
}
