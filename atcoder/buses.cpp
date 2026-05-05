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

void solve(int N , int C,  int K) {
    
    vector<int>T(N);
    for(int i = 0;i<N;i++){
      cin>>T[i];
    }

    sort(T.begin() , T.end());

    int maxLimit = 0;
       int buses = 0;

    for(int i = 0; i < N;) {
        buses++;

        int start = T[i];
        int limit = start + K;

        int count = 0;

        // fill this bus
        while(i < N && T[i] <= limit && count < C) {
            i++;
            count++;
        }
    }
        cout << buses << "\n";

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,c,k;
    cin>>n>>c>>k;
    solve(n , c, k);

    return 0;
}