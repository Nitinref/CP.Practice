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

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
  vector<pair<int , int>> vp = {{1,2},{32,3},{5,3}};
  vector<pair<int, int>> :: iterator it;
  for(it = vp.begin();it!= vp.end();++it ){

    cout<<(it ->first) << " " << (it->second)<<endl;

  }
}
