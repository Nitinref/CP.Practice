#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    unordered_set<int> s;

    int l = 0;
    int ans = 0;

    for (int r = 0; r < n; r++) {


        while (s.count(a[r])) {
            s.erase(a[l]);
            l++;
        }

        s.insert(a[r]);

        ans += (r - l + 1); 
    }

    cout << ans << "\n";
}