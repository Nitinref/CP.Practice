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

void solve(unordered_map<int , int>&m , int n) {
        for(int i  = 0; i<n;++i){
              cin>>i;      
              m[i]++;
    } 
     int count = 0;
    for(auto p:m){
        if(p.first() == p.second()){
          
        }
    }


}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 
    int n;
     cin>>n;
     unordered_map<int  ,int >m;
              // remove if single test case
    while (t--){
       while(n--){
         solve(m  ,n);
       }
        
    } 

    return 0;
}