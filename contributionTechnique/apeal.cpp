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

void solve(string s) {
 set<string>se;
 for(int i =0;i<s.size();i++){
    string mm  = s[i];
    se.insert(mm);
 }
   int n = s.size();
   int totalans = 0;
 for(int i = 0 ;i<se.size();i++){
    int ans1 = (n*(n+1))/2;
    int ans2 = (i+1) * (n-i);
     totalans = ans1 * ans2;
 }


 cout<<totalans<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    solve(s);

    return 0;
}