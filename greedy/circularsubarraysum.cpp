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

int solve(int n) {
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int totalsum = 0;
    int min_sum  =INT_MAX;
    int curr_sum = 0;

    for(int i = 0;i<n;i++){
        totalsum += arr[i];
        curr_sum += arr[i];
        min_sum = min(min_sum , curr_sum);
        if(curr_sum > 0){
            curr_sum = 0;
        }
    }

    curr_sum = 0;
    int max_sum = -INF;
    for(int i = 0;i<n;i++){
        curr_sum += arr[i];

        max_sum = max(curr_sum , max_sum);
       if(curr_sum < 0){
        curr_sum = 0;
       }
    }

       if(max_sum < 0){
        return max_sum;
       }

       return max(totalsum - min_sum , max_sum);

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans = solve(n);
    cout<<ans<<endl;

    return 0;
}