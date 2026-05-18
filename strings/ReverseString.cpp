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


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;
    string rev;
    for(int i = str.size()-1;i>=0;--i){
        rev.push_back(str[i]);
    }
    
   if(str  == rev){
    cout<<"YES";
   }else{
    cout<<"NO";
   }


    return 0;
}