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

void solve(int n , int k) {
    priority_queue<int>pr;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        pr.push(x);
    }
    int sum =0;

    while(k--){
      int first = pr.top();
      int ans =  pr.top() / 2;
      pr.pop();
      sum += first;
      pr.push(ans);
    }

    cout<<sum<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    int k;
    int n;        
    while (t--){
        cin>>n>>k;
        solve(n ,k);
    }

    return 0;
}