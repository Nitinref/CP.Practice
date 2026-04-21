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



int  solve(int k) {
    vector<int>fibo;
    fibo.push_back(1);
    fibo.push_back(2);

    while(true){
        int next = fibo.back() + fibo[fibo.size() - 2];
        if (next > 1e9) break;
        fib.push_back(next);
    }
    
    sort(fibo.begin() , fibo.end());

    int count  = 0;
  for( int i  = fibo.size()-1;i>=0;i-- ){
    if(fibo[i]<=k){
        k-=fibo[i];
        count++;
    }
  }
    return count;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;    
    int k;      
    while (t--){
        cin>>k;
        solve(k);
    }

    return 0;
}