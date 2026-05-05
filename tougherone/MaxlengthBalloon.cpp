#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve(int n){
    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr.begin(), arr.end(), [](auto &a, auto &b){
         return a.second < b.second; 
    })

    
    int currentArrow = arr[0].second;
    int maxArrow = 1;
    for (int i = 0; i < n; i++){
        if (arr[i].first > currentArrow) {
            maxArrow += 1;
            currentArrow = arr[i].second();
        }
    }

    cout << maxArrow << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    solve(n);

    return 0;
}