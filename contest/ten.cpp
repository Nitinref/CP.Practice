#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++) {

            cin >> a[i];


        }
        for (int i = 0; i < n; i++){

            cin >> b[i];

        } 
        vector<int> posi(n + 1);
        for (int i = 0; i < n; i++) {
            posi[a[i]] = i;
        }
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            arr[i] = posi[b[i]];
        }

        int best = 1;
        int curr = 1;

        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[i - 1]) {
                curr++;
            } else {
                curr = 1;
            }
            best = max(best, curr);
        }

        cout << n - best << "\n";
    }
}