#include <iostream>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;

    int screens = (y + 2) / 3;  
    int remaining_space = screens * 15 - (4 * y);  

    if (remaining_space < x)  
        screens += (x - remaining_space + 14) / 15;  

    cout << screens << endl;
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
