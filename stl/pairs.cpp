#include <bits/stdc++.h>
using namespace std;

#define int long long

struct ques{
    int s,d,t;
};

bool comp(ques a , ques b){
    return a.t * b.d < b.t * a.d;
}

void solve() {

    int n;
    cin >> n;
    
    vector<ques> arr;

    for(int i = 0; i < n; i++){
        int s,d,t;
        cin >> s >> d >> t;
        arr.push_back({s,d,t});
    }

    sort(arr.begin(), arr.end(), comp);

    int time = 0;
    int total = 0;

    for(int i = 0; i < n; i++){
        time += arr[i].t;
        total += arr[i].s - (time * arr[i].d); 
    }

    cout << total << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;          
    while (t--) solve();

    return 0;
}