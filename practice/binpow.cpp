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

long long  solve(long  n , long  p) {
    if(p == 0){
        return (1)% MOD;
    }else if(p%2 == 0){
      long long temp = solve( n , p/2 );
      return (temp * temp) %MOD;
    }else{
        return ((solve( n , p-1 )) * n)%MOD;
    }

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  long long n;
    cin>>n;
    long long p;
    cin>>p;
   long long ans =  solve(n , p);
   cout<<ans;

    return 0;
}