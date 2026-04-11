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
    long long n;
     cin>>n;
    vector<long long>arr(n);

    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }
    
    long long ans = 0;

    for(int i = 0;i<arr.size();i++){
        for(int j  = i+1;j<arr.size();j++){
            if(arr[i] >arr[j]){
                 ans += (i+1)*(n-j);

            }
        }
    }
    cout<<ans<<endl;

    return 0;
}