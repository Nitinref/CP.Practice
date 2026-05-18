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
    vector<int>arr(n);
    for(int i  = 0;i<n;i++){
        cin>>arr[i];
    }

    int l = 0;
    int h = -1;
    int ans  = 0;
    int sum = 0;

    while(t<n){
        while (h+1 < n &&  h-l+1 < k ) {
             h++;
            sum += arr[h];  
        }

        if(h-l+1 == k){
            ans = max(ans  , sum);
        }
        
        if(l>h){
            h = l-1;
            l++;
        }else{
            sum -=  arr[l];
            l++;
        }

    }

    cout<<ans<<endl;


    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n;
     int k;
     cin>>n>>k;
     solve(n , k);

    return 0;
}