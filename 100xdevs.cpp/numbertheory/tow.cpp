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
#define MAXN 1e6
vector<int>arr(MAXN , 0);
void pre(){

    for (int i = 1; i <= MAXN; i++){
        for (int j = i; j <= MAXN; j += i){
            arr[j]++;
        }
    }
    
}

void solve(int n){
    cout<<arr[n]<<endl;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pre();
    int q;
    cin >> q;
    while(q--){
        int n;
        cin>>n;
        solve(n);
    }

    return 0;
}