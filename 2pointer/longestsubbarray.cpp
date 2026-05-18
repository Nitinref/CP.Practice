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
s
void solve() {

    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }   
    int l = 0;
    int h= -1;
    int sum = 0;
    int length = 0;
    int final= 0;

    while(l<n){
       while(h+1<n && sum + arr[h+1] < x){
                h++;
                sum += arr[h];
                length = h-l+1;
                final = max(final , length);
        }

        if(l>h){
            h = l-1;
            l++;
        }else{
                sum -= arr[l];
                length = h-l+1;

            l++;
        }
        
    }

    cout<<final<<endl;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     solve();
 
    return 0;
}