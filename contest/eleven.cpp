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

void solve(int n , int m ) {
    if(n% 2 == 1 && m%2 == 1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;    
    int n,m;      
    while (t--){
        cin>>n>>m;
        solve(n, m );
    }
    

    return 0;
}