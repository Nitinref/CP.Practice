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

void solve() {
    string s, t;
    cin>>s>>t;
    unordered_map<char ,int>mp;
    for(auto i:s){
        mp[i]++;
    }

    for(auto i:t){
        mp[i]--;
    }

    for(auto it:mp){
        if(it.second != 0){
            return false;
        }
    }

    return true;
    
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;          
    while (t--) solve();

    return 0;
}