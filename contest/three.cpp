#include <bits/stdc++.h>
using namespace std;

vector<long long> primes;

void buildPrimes() {
    int MAX = 200000;
    vector<bool> isPrime(MAX, true);

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < MAX; i++) {1
        if (isPrime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i < MAX; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    buildPrimes();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << primes[i] * primes[i + 1] << " ";
        }
        cout << "\n";
    }

    return 0;
}