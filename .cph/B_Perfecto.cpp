#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;
 
bool isPerfectSquare(long long x) {
    long long s = sqrt(x);
    return s * s == x;
}
 
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long totalSum = (1LL * n * (n + 1)) / 2;
        if (isPerfectSquare(totalSum)) {
            cout << "-1\n";
            continue;
        }
        set<int, greater<int>> available;
        for (int i = 1; i <= n; i++) {
            available.insert(i);
        }
        vector<int> p;
        long long prefixSum = 0;
        while (!available.empty()) {
            for (auto it = available.begin(); it != available.end(); ++it) {
                if (!isPerfectSquare(prefixSum + *it)) {
                    prefixSum += *it;
                    p.push_back(*it);
                    available.erase(it);
                    break;
                }
            }
        }
        for (int num : p) {
            cout << num << " ";
        }
        cout << "\n";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}