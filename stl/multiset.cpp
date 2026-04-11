#include <bits/stdc++.h>
using namespace std;

#define int         long long
#define pb          push_back
#define all(x)      (x).begin(), (x).end()
#define sz(x)       (int)(x).size()
#define yes         cout << "YES\n"
#define no          cout << "NO\n"

const int MOD  = 1e9 + 7;
const int INF  = 1e18;

void solve(int n, int k) {
    multiset<long long> m;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        m.insert(x);
    }

    long long total_candies = 0;

    for (int i = 0; i < k; i++) {
        auto last = prev(m.end());
        long long mx = *last;

        total_candies += mx;

        m.erase(last);        
        m.insert(mx / 2);
    }

    cout << total_candies << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    int n , k;          
    while (t--) {
        cin>>n>>k;
        solve(n ,k);
    }
    return 0;
}