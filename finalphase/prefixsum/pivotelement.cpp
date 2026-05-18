#include <bits/stdc++.h>
#define int long long
using namespace std;

int solve(int n) {
    vector<int> arr(n);

    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    int left = 0;

    for (int i = 0; i < n; i++) {

        int right = total - left - arr[i];

        if (left == right) {
            return i;
        }

        left += arr[i];
    }

    return -1;
}

signed main() {

    int n;
    cin >> n;

    cout << solve(n);

} 