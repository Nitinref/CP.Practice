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

int  solve(int n , int k) {
   vector<int>arr(n);
   int count = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>prefix(n);
    prefix[0] = arr[0];
    for(int i = 1;i<n;i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    unordered_map<int  , int >sum(n);
    for(int i = 0;i<n;i++){
        if(prefix[i] - k == 0){
         count++;
        }else if(sum.find(prefix[i] - k) != sum.end()){
          
            count += sum[prefix[i] - k];
           
        }

        sum[prefix[i]]++;

    }

    return count;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int k;
    cin>>n;
    cin>>k;
    int ans =  solve(n , k);
     cout<<ans<<endl;

    return 0;
}