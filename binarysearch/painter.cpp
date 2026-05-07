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
int n, k;
vector<int> arr(MAXN);

int check(int mid)
{
    int last_time_per = 0;
    int spawn = 0;

    for (int i = 0; i < n; i++)
    {
        if (last_time_per >= arr[i]){
            last_time_per -= arr[i];
        } else {
            spawn++;
            last_time_per = mid;
            if (last_time_per >= arr[i]){
                last_time_per -= arr[i];
            }else{
                return 0;
            }
        }
    }
}
void solve()
{
    cin >> n >> k;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        cin >> arr[i];
    }
    int low = 0;
    int high = sum;
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

    cout<<ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}