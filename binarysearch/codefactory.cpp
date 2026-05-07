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
#define MAXN 100100
int n, t;
vector<int> arr(MAXN);

int check(int mid)
{
    int totalProduct = 0;
    for (int i = 0; i < n; i++)
    {
        totalProduct += mid / arr[i];

        if (totalProduct >= t)
        {
            return 1;
        }
    }

    return 0;
}
void solve()
{
    cin >> n >> t;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int low = 0;
    int high = arr[0] * t;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (check(mid) == 1)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}