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

#define MAXN 1000000
vector<int>spf(MAXN);

void precompute(){
   for(int i =2 ;i<=MAXN;i++){
    spf[i] = i;
   }

   for(int i = 2 ;i<MAXN;i++){
     if(spf[i] == i){
        for(int j = 2*i;j<MAXN;j+=i){
            if(spf[j] ==  j){
                spf[j] = i;
            }
        }
    }

   }
}
void solve(int n) {
    while(n!=1){
        cout<<spf[n]<<" ";

        n = n / spf[n];
    }
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();
    int n;
    cin>>n;
    solve(n);
    return 0;
}