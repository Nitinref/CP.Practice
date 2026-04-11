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

long long range_sum(const vector<long long>& pre, long long l, long long r) {
    long long res = pre[r] - pre[l-1];
    return (res % MOD + MOD) % MOD;
}

void solve(long long n, long long q) {
    vector<long long> arr(n), pre(n+1);
    for(int i=0; i<n; i++) cin>>arr[i];
    pre[0] = 0;
    for(int i=1; i<=n; i++) pre[i] = pre[i-1] + arr[i-1];
    while(q--) {
        long long l, r;
        cin>>l>>r;
        cout << range_sum(pre, l, r) << '\n';
    }
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   long long  n;
   long long q;

   cin>>n>>q;
   solve(n , q);

    return 0;
}