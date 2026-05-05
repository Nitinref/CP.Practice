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

void factor(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            if (n / i != i)
            {
                cout << n / i << " ";
            }
        }
    }
}

void solve(int n){
    for(int i = 1;i<=n;i++){
        factor(i);
    }

}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    solve(n);
    return 0;
}