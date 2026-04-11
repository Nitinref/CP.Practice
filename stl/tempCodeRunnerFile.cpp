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

void solve(int n) {


    unordered_map<int  ,int>m;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
    }

     int ans = 0;
    for(auto p:m){
        int x = p.first;
        int freq = p.second;

        if(freq >=x){
            ans += (freq - x);
        }else{
            ans += freq;
        }
    }
    
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;   
    int n;       
    while (t--){
         cin>>n;

        solve( n);
    } 

    return 0;
}