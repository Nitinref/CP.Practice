#include <bits/stdc++.h>
using namespace std;

#define int         long long
#define pb          push_back
#define all(x)      (x).begin(), (x).end()
#define sz(x)       (int)(x).size()
#define yes         cout << "YES\n"
#define no          cout << "NO\n"
#define MAXN 100100
const int MOD  = 1e9 + 7;
const int INF  = 1e18;
vector<int>arr(MAXN);
int  n , k;
int check(int mid){
    int leftdist = arr[mid] - arr[mid-1];
    int rightdist = arr[mid+1] - arr[mid];
    int maxDist = max(leftdist , rightdist);
    if(leftdist > rightdist){
        
    }
}
void solve() {
    cin>>n>>k;
    int mx = 0;
    for(int i = 0;i<n;i++){
       
        cin<<arr[i];
        mx = max(arr[i] , mx);
    }
    int low = 1;
    int high = mx;
    int ans = 0;

    while(low<=high){
        int mid = low +(high - low)/2;
        if(check(mid)==1){
            ans = mid;
            high  = mid-1;
        }else{
            low = mid+1;
        }
    }
    
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}