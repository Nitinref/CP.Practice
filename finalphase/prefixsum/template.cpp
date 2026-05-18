#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int n , int q){

    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int>prefix(n);
    prefix[0] = arr[0];
    for(int i= 1;i<n;i++){
    prefix[i] = arr[i] + prefix[i-1];
    }

    int l;
    int r;
    int sum = 0;
    while(q--){
        cin>>l>>r;
         if(l == 0){
            sum = prefix[r];
         }else{
            sum = prefix[r]-prefix[l-1];
         }

         cout<<sum<<endl;
    }
}

signed main(){
 
    int n;
    cin>>n;
    int q;
    cin>>q;
    solve(n , q);
}