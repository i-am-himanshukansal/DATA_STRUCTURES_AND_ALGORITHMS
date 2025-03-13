#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        unordered_map<int, priority_queue<int>> brand_costs;
        
        for (int i = 0; i < k; i++) {
            int brand, cost;
            cin >> brand >> cost;
            brand_costs[brand].push(cost);
        }
        
        priority_queue<int> max_costs;
        
        for (auto it = brand_costs.begin(); it != brand_costs.end(); ++it) {
            max_costs.push(it->second.top());
        }
        
        long long max_profit = 0;
        int shelves_used = min(n, (int)max_costs.size());
        
        while (shelves_used--) {
            max_profit += max_costs.top();
            max_costs.pop();
        }
        
        cout << max_profit << "\n";
    }
    
    return 0;
}
