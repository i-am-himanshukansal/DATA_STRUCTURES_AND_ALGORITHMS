#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, gold = 0, given = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a >= k) gold += a;
            else if (a == 0 && gold > 0) {
                gold--;
                given++;
            }
        }
        cout << given << endl;
    }
    return 0;
}
