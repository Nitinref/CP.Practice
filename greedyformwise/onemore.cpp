#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> b(n-1);
    for(int i = 0; i < n-1; i++){
        cin >> b[i];
    }

    vector<int> a(n);

    a[0] = b[0];
    a[n-1] = b[n-2];

    for(int i = 1; i < n-1; i++){
        a[i] = min(b[i-1], b[i]);
    }

    for(int x : a){
        cout << x << " ";
    }
    cout << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
}