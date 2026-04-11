#include <bits/stdc++.h>
using namespace std;

#define int long long

set<int> m;

void solvet(string x, int y) {
    if (x == "add") {
        m.insert(y);
    }
    else if (x == "erase") {
        m.erase(y);
    }
    else if (x == "find") {
        if (m.find(y) != m.end()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    else if (x == "print") {
        for (auto p : m) {
            cout << p << " ";
        }
        cout << "\n";
    }
    else if (x == "empty") {
        m.clear();  
    }
}

void solve() {
    int q;
    cin >> q;

    m.clear();  

    while (q--) {
        string x;
        cin >> x;

        if (x == "add" || x == "erase" || x == "find") {
            int y;
            cin >> y;
            solvet(x, y);
        } else {
            solvet(x, 0);
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}