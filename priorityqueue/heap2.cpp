#include <bits/stdc++.h>
using namespace std;

#define int long long

#define N 100000

vector<int> arr(N + 1, 1);
vector<int> arr2;
vector<int> prefix;

void pre(){
    arr[0] = arr[1] = 0;

    for (int i = 2; i * i <= N; i++) {
        if (arr[i] == 1) {
            for (int j = i * i; j <= N; j += i) {
                arr[j] = 0;
            }
        }
    }
}

void solve(int n){

    // store primes
    for (int i = 0; i <= n; i++) {
        if(arr[i] == 1){
            arr2.push_back(i);
        }
    }

    // prefix
    prefix.resize(arr2.size());
    prefix[0] = arr2[0];

    for(int i = 1; i < arr2.size(); i++){
        prefix[i] = prefix[i-1] + arr2[i];
    }

    int count = 0;
for(int i = 0; i < prefix.size(); i++){
    if(prefix[i] > n) break;

    if(prefix[i] >= 3 && arr[prefix[i]] == 1){
        count++;
    }
}

    cout << count << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    pre();

    int n;
    cin >> n;

    solve(n);
}