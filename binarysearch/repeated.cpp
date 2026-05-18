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
#define MAXN 100100
vector<int>arr(MAXN);
int n;


int check(int mid){
   int i = 0;
   for(int i = 0;i<n;i++){
    if(mid == arr[i]){
     
    }
   }
}

void solve() {
    cin>>n;
    for(int i = 0;i<n;i++){
        cin<<arr[i];
    }

    int low = 0;
    int high = n-1;
    int ans = 0;
    
    while(l<=h){
     int mid = low + (high-low)/2;
     if(check(mid) == 1){
        ans= mid;
        high = mid-1;
     }else{
        low = mid +1;
     }
    }

    return ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   solve();

    return 0;
}