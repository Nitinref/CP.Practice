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

void solve(int n, int x) {
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(all(a));

    int i = 0, j = n - 1;
    int count = 0;

    while(i <= j){
        if(a[i] + a[j] <= x){
            i++;
        }
        j--;
        count++;
    }

    cout << count << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;
    solve(n , x);
    return 0;
}