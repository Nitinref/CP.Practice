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

void solve(int n , int x , int y) {
    
    vector<int>global(n);
    for(int i = 0;i<n;i++){
        cin>>global[i];
    }

    vector<int>min;
    vector<int>ans;

     for(int i = 0;i<x;i++){
        ans.push_back(global[i]);
    }


     for(int i = y;i<n;i++){
        ans.push_back(global[i]);
    }

    for(int i = x;i<y;i++){
        min.push_back(global[i]);
    }

  
   

    auto mn = min_element(min.begin() , min.end());
    rotate(min.begin() , mn ,  min.end() );

    int path = ans.size();

    for(int i = 0;i<ans.size();i++){
        if(ans[i] > min.front()){
            path = i;
            break;
        }
    }

    for(int i = 0;i<path;i++){
        cout<<ans[i]<<' ';
    }

    for(int i = 0;i<min.size();i++){
        cout<<min[i]<<' ';

    }
     for(int i = path;i<ans.size();i++){
        cout<<ans[i]<<' ';

    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 
    int n ,x , y;         
    while (t--){
        cin>>n>>x>>y;
        solve(n ,x ,y);
    }

    return 0;
}