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

void solve(int a , int b) {
    unordered_set<int>arr;
    for(int i =0;i<a;i++){
        int x;
        cin>>x;
        arr.insert(x);
    }

  if(arr.size() == a){
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    if(arr.size() == b){
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     int a,b;
      cin>>a>>b;
      solve(a,b);

    return 0;
}