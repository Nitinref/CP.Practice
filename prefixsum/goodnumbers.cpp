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

long N = 10000000;
vector<long long>arr(N , 0);
void solve(long long n , long long k , long long q) {

    
    long long l;
    long long r;
    for(int i = 0;i<n;i++){
        cin>>l>>r;

    arr[l]++;
    arr[r + 1]--;
    }

    for(int i=0;i<N;i++){
        arr[n] = arr[i-1] + arr[i];
    }

  for (int i = 1; i < N; i++) arr[i] = (arr[i] >= k);
   



}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     long long n;
     
     long long k;
     long long q;
     cin>>n>>k>>q;

     solve(n , k , q);
     

    return 0;
}