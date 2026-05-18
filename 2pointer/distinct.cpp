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

int freq[1000100];
int distinct = 0;

void insert(int x){
    if(freq[x]==0)distinct++;
    freq[x]++;
}

void erase(int x){
    freq[x]--;
    if(freq[x]==0)distinct--;
}

void solve() {
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int tail = 0;
    int head = -1;
    int ans = 0;
    while(tail<n){
        while(head+1<n && (freq[arr[head+1]]>0 || distinct<k)){
            head++;
            insert(arr[head]);
        }

        ans += head-tail+1;

        if(tail<=head){
            erase(arr[tail]);
            tail++;
        }else{
            tail++;
            head = tail-1;
        }
    }

    cout<<ans<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;          
    while (t--) solve();

    return 0;
}