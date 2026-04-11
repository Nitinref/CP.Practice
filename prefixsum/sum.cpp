#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve(int n, int q)
{
    vector<int> sum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> sum[i];
    }

    vector<int> prefix(n);
    prefix[0] = sum[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + sum[i];
    }

    vector<int> w(n);
    for (int i = 1; i <= n; i++)
    {
        w[i] = sum[i] * (i);
    }

    vector<int> wsum(n);
    wsum[0] = w[0];
    for (int i = 0; i < n; i++)
    {
        wsum[i] = wsum[i - 1] + w[i];
    }

    int ans int l, r;
    while (q--)
    {
        cin >> l >> r;
        ans = (wsum[r] - wsum[l-1]) - (l-1) * (prefix[r] - prefix[l-1]);
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int q;
    cin >> q;
    solve(n, q);
    return 0;
}