#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    // Try every possible second element
    for (int i = 0; i < 2 * n - 1; i++) {

        multiset<int> ms(v.begin(), v.end());
        vector<pair<int,int>> ans;

        int X = v.back() + v[i];
        bool possible = true;

        while (!ms.empty()) {

            // get largest
            int largest = *ms.rbegin();
            ms.erase(ms.find(largest));

            int needed = X - largest;

            // check if needed exists
            if (ms.find(needed) == ms.end()) {
                possible = false;
                break;
            }

            // remove needed
            ms.erase(ms.find(needed));

            ans.push_back({largest, needed});

            // update X
            X = largest;
        }

        if (possible) {
            cout << "YES\n";
            cout << v.back() + v[i] << "\n";
            for (auto &p : ans) {
                cout << p.first << " " << p.second << "\n";
            }
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}