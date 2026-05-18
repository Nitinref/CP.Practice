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
    string s;
    cin>>s;
    string v;

    for(int i = 0;i<s.size();i+=2){
        v+=s[i];
    }

    sort(v.begin() , v.end());


    for(int i = 0;i<v.size()-1;i++){
        cout<<v[i]<<"+";
        
    }
    cout<<v.back()<<endl;;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}