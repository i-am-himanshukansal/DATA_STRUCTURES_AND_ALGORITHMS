#include <iostream>
#include <unordered_map>
using namespace std;

void solve() {
    int n, x;
    long long k;
    cin >> n >> x >> k;
    string s;
    cin >> s;

    unordered_map<int, long long> first_occurrence;
    first_occurrence[x] = 0;  // Store when we first see x
    int position = x, zero_count = 0;
    long long time = 0;

    // Simulate one full cycle
    for (int i = 0; i < k; i++) {
        if (time >= k) break;  // Stop if we reach k seconds

        for (char move : s) {
            if (time >= k) break;  // Stop early

            position += (move == 'L') ? -1 : 1;
            time++;

            if (position == 0) {
                zero_count++;
                time = 0;  // Restart sequence
                position = x;  // Back to start position
                break;  // Restart cycle
            }

            // Detect cycle to optimize
            if (first_occurrence.find(position) != first_occurrence.end()) {
                long long cycle_length = time - first_occurrence[position];
                long long cycles = (k - time) / cycle_length;
                zero_count += cycles;
                time += cycles * cycle_length;
            } else {
                first_occurrence[position] = time;
            }
        }
    }

    cout << zero_count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
