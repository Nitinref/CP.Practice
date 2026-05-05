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
     int y = 0;

    for(int i = 0;i<n;i++){
        y+= arr[i];
    }


    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int sum = 0;
    for(int i = 0;i<n-1;i++){
        sum += arr[i];
        max1 = max(max1 , sum);
        if(sum < 0){
            sum  = 0;
        }
    }


     int sum2 =0;
     for(int i = 1;i<n;i++){
        sum2 += arr[i];
        max2 = max(max2 , sum2);
        if(sum2 < 0){
            sum2 = 0;
        }
    }

    int final = max(max1 , max2);

    if(final < y){
        cout<<"YES"<<endl;
    }else{
         cout<<"NO"<<endl;
    }


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