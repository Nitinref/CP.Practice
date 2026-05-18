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
    vector<int>arr(n);
    int k;
    cin>>k;
   
for(int i = 0;i<n;i++){
    cin>>arr[i];
}

int h = -1;
int l = 0;
int sum = 0;
int length = 0;

while(l<n){
    while(h+1<n && arr[h+1] + sum < k ){
        h++;
        sum+=arr[h];
        length = max(length , h-l+1);
    }

    if(l>h){
        l++;
        h = l-1;
    }else{
        sum-=arr[l];
        l++;
    }

}


 cout<<length<<endl;

    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     solve();

    return 0;
}