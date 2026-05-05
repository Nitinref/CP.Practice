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

void solve() {

    int n;
    cin>>n;
    vector<int>v(2*n);
    for(int i = 0;i<2*n;i++){
        cin>>v[i];
    }

    sort(v.begin() , v.end());

    for(int i = 0;i<2*n-1;i++){
        multiset<int>ms(v.begin() , v.end());
        vector<pair<int, int>>ans;

        int x = v.back() + v[i];  // we  added last value with current.
        bool possible = true;
        while(!ms.empty()){ // ms.empty means  jabtak ms empty nhi hota.
            int largest = *ms.rbegin();  // rbegin means last value of sroted ms.
            ms.erase(ms.find(largest)); 

            int needed  = x - largest;

            if(ms.find(needed) == ms.end()){ //  agar neede ms me nhi hai to 
                  possible = false;
                  break;
            }

            ms.erase(ms.find(needed));
            ans.push_back({largest , needed});

            x = largest;
        }

         if (possible) {
            cout << "YES\n";
            cout << v.back() + v[i] << "\n";
            for (auto &p : ans) {
                cout << p.first << " " << p.second << "\n";
            }
            return;
        }

    }

    cout << "NO\n";
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        solve();
    }


    return 0;
}