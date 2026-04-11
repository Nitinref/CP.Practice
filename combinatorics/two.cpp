#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n,k,q;
        cin>>n>>k>>q;

        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int cnt = 0;
        int ans = 0;

        vector<int> final;

        for(int i=0;i<n;i++){

            if(a[i] <= q){
                cnt++;
            }else{
                if(cnt>0) final.push_back(cnt);
                cnt= 0;
            }
        }

        if(cnt>0) final.push_back(cnt);

        for(int len: final){
            if(len >= k){
                int x = len-k+1;
                ans += x*(x+1)/2;
            }
        }

        cout<<ans<<"\n";
    }
}