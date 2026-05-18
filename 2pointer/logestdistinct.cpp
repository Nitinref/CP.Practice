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
    int k;
    cin>>k;
    
    unordered_map<int , int>freq;
    vector<int>arr(n);
    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }

    int l = 0;
    int h = -1;
    int ans = 0;
    int distinct = 0;
    int total = 0;

    while(l<n){
        while(h+1<n && distinct<=k ){

            h++;
            freq[arr[h]]++;
            if(freq[arr[h]] == 1){
                distinct++;
            }
            ans+= arr[h];
        }

        if(distinct>k){
         total+=ans;

        }

        if(l>h){
         h= l-1;
         l++;
        }else{
               
            freq[arr[l]]--;
            if(freq[arr[l]]== 0 ){
                distinct--;
            }
            ans-= arr[l];
            l++;
        }

    }

    cout<<total<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}