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

const int MAXN = 200000;

vector<int> spf(MAXN + 1);


void build_spf() {
    for (int i = 1; i <= MAXN; i++) {
        spf[i] = i;
    }

    for (int i = 2; i * i <= MAXN; i++) {
        if (spf[i] == i) { 
            for (int j = i * i; j <= MAXN; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

void solve(int n, int k) {
    int count = 0;

    while (n > 1) {
        int p = spf[n];
        count++;
        if (count == k) {
            cout << p << "\n";
            return;
        }
        n /= p;
    }

    cout << -1 << "\n";
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    build_spf();

    int q;
    cin >> q;

    while (q--) {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }

    return 0;
}