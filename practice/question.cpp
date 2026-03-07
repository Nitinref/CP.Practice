#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    bool found = false;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 67) found = true;
    }
    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}