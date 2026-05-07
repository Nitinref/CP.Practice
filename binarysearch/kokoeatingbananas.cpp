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
#define MAXN  100100

int n, h;
vector<int> arr(MAXN);
int check(int mid){

    int hoursLeft = h;

    for(int i = 0; i < n; i++){

        int bananasLeft = arr[i];

        while(bananasLeft > 0){

            bananasLeft -= mid;
            hoursLeft--;

            if(hoursLeft < 0){
                return 0;
            }
        }
    }

    return 1;
}

void solve()
{
    cin >> n >> h;
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }

    int low = 1;
    int ans = -1;
    int high = maxi;
    while (low <= high){
        int mid = low + (high - low) / 2;
        if (check(mid) == 1) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}
