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

void solve(int n , int k) {
  int  head = -1; //why?
    int tail = 0; 
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int ans = 0;
    int cnt0 = 0;
    while(tail<n){
        while(head+1<n && (arr[head+1]==1 || cnt0 < k)){  //agar next element 0 / 1 hai or k > 0freq take it
           head++;

           if(arr[head] == 0)cnt0++;
        }
        ans  = max(ans , head-tail+1);

        if(tail>head){
            tail++;
            head = tail-1;
        }else{
            if(arr[tail]==0)cnt0--;
            tail++;
        }


    }

    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , k; 
    cin>>n>>k;
    solve(n , k);
    return 0;
}