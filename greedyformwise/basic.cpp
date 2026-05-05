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
   vector<int>arr(n);
   for(int i = 0;i<n;i++){
    cin>>arr[i];
   }

   sort(arr.begin() , arr.end());

   int maxi = 0;
   int count  = 0;
   for(int i = 0;i<n;i++){
      if(arr[i] > maxi){
        maxi = arr[i];
        count++;
      }
   }

   cout<<count<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;        
    int n;  
    while (t--){
        cin>>n;
        solve(n);
    }

    return 0;
}