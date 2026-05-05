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

int solve(int n) {
    int l = 0;
    int h = n - 1;
    int mid;
    int ans = -1;   // FIX

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (l <= h) {
        mid = l + (h - l) / 2;

        if (arr[mid] == 1) {
            ans = mid;
            h = mid - 1;
        } else {
            l = mid + 1;  
        }
    }

    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
   int ans =  solve(n);
   cout<<ans<<endl;

        return 0;
}