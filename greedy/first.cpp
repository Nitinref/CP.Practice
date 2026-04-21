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

    vector<int>arr2(n);
    for(int i =0;i<n;i++){
        cin>>arr2[i];
    }
    sort(arr.begin() , arr.end());
    sort(arr2.begin() , arr2.end() , greater<int>());
    int sum =0;

    for(int i=0;i<n;i++){
      sum+= arr[i]*arr2[i]; 
    }
    cout<<sum<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;    
    int n;      
    while (t--) {
    cin>>n;
    solve(n);
    }

    return 0;
}