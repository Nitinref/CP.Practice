#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(int n) {

    vector<pair<int , int>> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i].first;
    for(int i = 0; i < n; i++) cin >> arr[i].second;


    sort(arr.begin(), arr.end(), [](auto &a, auto &b){
        return a.first < b.first;
    });

    vector<int> prefixMax(n);
    prefixMax[0] = arr[0].first;

    for(int i = 1; i < n; i++){
        prefixMax[i] = max(prefixMax[i-1], arr[i].first);
    }

    vector<int> suffixSum(n+1, 0);
    for(int i = n-1; i >= 0; i--){
        suffixSum[i] = suffixSum[i+1] + arr[i].second;
    }
int ans = suffixSum[0];
    for(int i = 0; i < n; i++){
        int delivery = prefixMax[i];
        int pickup   = suffixSum[i+1];

        int curr = max(delivery, pickup);
        ans = min(ans, curr);
    }

    cout << ans << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}