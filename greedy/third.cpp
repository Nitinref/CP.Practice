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


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr = {2,3,-2,4};
    int n = arr.size();
   priority_queue<int>arr1;

    for(int i = 0; i < n; i++) {
        int product = 1;
        for(int j = i; j < n; j++) {
            product *= arr[j];
            arr1.push(product);
        }

       
    }
 
    cout<<arr1.top()<<endl;

}