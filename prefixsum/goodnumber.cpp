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
int N = 1000005;
void solve(int n , int k , int q) {
    vector<int>pre(N ,0);

    int l;
    int r;
    for(int i = 0;i<n;i++){
      cin>>l;
      cin>>r;
       pre[l]++;
        pre[r+1]--;
    }


    vector<int> prefix(N);
      prefix[0] = pre[0];
    for(int i = 1;i<N;i++){
      
        prefix[i] = prefix[i-1] + pre[i];
    }

    for(int i =0;i<N;i++){
        if(prefix[i] >= k){
            prefix[i] = 1;
        }else{
            prefix[i] = 0;
        }
    }

   vector<int>prefix2(N);
     prefix2[0] = prefix[0];
   for(int i =1;i<N;i++ ){
  
    prefix2[i] = prefix2[i-1] + prefix[i];
   }

   while(q--){
    cin>>l;
    cin>>r;

    int ans = prefix2[r] - prefix2[l-1];
    cout<<ans<<endl;
   }
    


}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int  n;
    cin>>n;
    int k;
    cin>>k;
    int q;
    cin>>q;
    solve(n , k , q);

    return 0;
}