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
int n ;
int arr[100100];
int check(int mid) {
    if(mid == n-1)return 1;
    if(arr[mid] < arr[0]){
        return 1;
    }
    else return 0;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }


    int l = 0;
    int h = n-1;
    int ans = 0;
    while(l<=h){
        int mid = l + (h-l)/ 2;
         if(check(mid) == 1){
            ans = mid;
            h = mid-1;
        }else{
            l = mid+1;
        }
    }
    cout << ans << endl;

    return 0;
}