#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(int n) {
    vector<pair<int, int>> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }


    sort(arr.begin(), arr.end());

    int currentTime = 0;
    int totalReward = 0;

    for(int i = 0; i < n; i++) {
        int duration = arr[i].first;
        int deadline = arr[i].second;


        currentTime += duration; 
        
        totalReward += (deadline - currentTime);
    }

    cout << totalReward << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if(cin >> n) {
        solve(n);
    }
    return 0;
}