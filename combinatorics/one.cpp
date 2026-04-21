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

int arr[1000100];
void pre(){
    arr[0] =1;
    for(int i = 1;i<1000000;i++){
        arr[i] = (arr[i -1] * i)%MOD;
    }
}

int binpow(int n  ,int p ){
    if(p == 0){
        return (1)%MOD;
    }
    if(p%2 == 0){
        int temp =  binpow(n , p/2);
        return (temp*temp)%MOD;
    }
    else{
        return ((binpow(n  , p-1))*n)%MOD;
    }
}

int inv(int n){
    return binpow(n  , MOD-2);
}


int solve(int n , int r){

    if(r<0  || r==0){
        return 1;
    }

    int num = arr[n];
    int den = (arr[r] * arr[n-r])%MOD;
    int den1 = inv(den);

    int ans = (num * den1)%MOD;

    return ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     pre();
     int t;
     cin>>t;
    while(t--){
        int n;
    cin>>n;
   int ans =  solve(n , 4);
   cout<<ans%MOD<<endl;


    }

    return 0;
}