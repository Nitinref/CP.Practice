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
int n;

vector<int> arr(MAXN);

int check(int mid)
{

    if (mid == n - 1)
        return 1;
    if (arr[mid] > arr[mid + 1])
        return 1;
    else
    {
        return 0;
    }
}

int binarysearch(int l, int h, int k){
    while(l <= h){
        int mid = l + (h - l) / 2;
        if(arr[mid] == k) return mid;
        else if(arr[mid] > k) h = mid - 1;
        else l = mid + 1;
    }
    return -1;   
}

int binarysearch2(int l, int h, int k)
{
    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (arr[mid] == k)
            return mid;
        else if (arr[mid] > k)
            l = mid + 1; // IMPORTANT (reverse)
        else
            h = mid - 1;
    }
    return -1;
}

void solve()
{
    int q;
    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int h = n - 1;
    int ans = 0;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (check(mid) == 1)
        {
            ans = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    int index = -1;

    while (q--)
    {
        int k;
        cin >> k;

        int ans1 = binarysearch(0, ans, k);
        int ans2 = binarysearch2(ans + 1, n - 1, k);

        if (ans1 != -1 && ans2 != -1)
        {
            cout << ans1 + 1 << " " << ans2 + 1 << endl;
        }
        else if (ans1 != -1)
        {
            cout << ans1 + 1 << endl;
        }
        else
        {
            cout << ans2 + 1 << endl;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}