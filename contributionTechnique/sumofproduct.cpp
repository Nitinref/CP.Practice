#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;  

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int current = 0;
    int total = 0;

    for(int i = 0; i < n; i++){
        current = current * arr[i] + arr[i]; 
        total += current;
    }

    cout << total << endl;
    return 0;
}