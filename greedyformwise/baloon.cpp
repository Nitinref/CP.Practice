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

int findMinArrows(vector<vector<int>>& points) {

    int arrow = 1;
    int arrowPosition = points[0][1];

    sort(points.begin() , points.end() , [](auto&a , auto&b){
        return a[1] < b[1];
    })
    for(int i = 0;i<n;i++){
        if(points[i][0] > points[0][1]){
            continue;
        }
    }
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    solve(n);

    return 0;
}