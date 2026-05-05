#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;
vector<int> isPrime(MAXN + 1, 1);

void sieve() {
    isPrime[0] = isPrime[1] = 0;

    for (int i = 2; i * i <= MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                isPrime[j] = 0;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int n;
    cin >> n;

    string res = "";
    int count = 0;

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            res += to_string(i) + " ";
            count++;
        }
    }

    cout << res << '\n';
    cout << count << '\n';

    return 0;
}