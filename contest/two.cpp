#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    vector<int> a(7);
    
    for(int i = 0; i < 7; i++){
        cin >> a[i];
    }

    int total = 0;
    int maxi = LLONG_MIN;

    for(int i = 0; i < 7; i++){
        total += a[i];
        maxi = max(maxi, a[i]);
    }

    int ans = 2 * maxi - total;

    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}