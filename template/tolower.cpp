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
    
    string s;
    cin>>s;
    for(char i:s){
         i = tolower(i);

        if(!(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'y' )){
            cout<<"."<<i;
        }
    }

    cout<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}