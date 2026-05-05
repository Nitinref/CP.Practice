#include <bits/stdc++.h>
using namespace std;

#define int long long

long long countAB(string &s){
    unordered_map<int,int> mp;
    mp[0] = 1;

    int diff = 0;
    long long ans = 0;

    for(char c : s){
        if(c == 'A') diff++;
        else if(c == 'B') diff--;

        ans += mp[diff];
        mp[diff]++;
    }
    return ans;
}


long long countBC(string &s){
    unordered_map<int,int> mp;
    mp[0] = 1;

    int diff = 0;
    long long ans = 0;

    for(char c : s){
        if(c == 'B') diff++;
        else if(c == 'C') diff--;

        ans += mp[diff];
        mp[diff]++;
    }
    return ans;
}

long long countAC(string &s){
    unordered_map<int,int> mp;
    mp[0] = 1;

    int diff = 0;
    long long ans = 0;

    for(char c : s){
        if(c == 'A') diff++;
        else if(c == 'C') diff--;

        ans += mp[diff];
        mp[diff]++;
    }
    return ans;
}

long long countABC(string &s){
    map<pair<int,int>, int> mp;
    mp[{0,0}] = 1;

    int d1 = 0, d2 = 0;
    long long ans = 0;

    for(char c : s){
        if(c == 'A'){
            d1++; d2++;
        } 
        else if(c == 'B'){
            d1--;
        } 
        else{
            d2--;
        }

        ans += mp[{d1,d2}];
        mp[{d1,d2}]++;
    }
    return ans;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    long long total = n * (n + 1) / 2;

    long long ab = countAB(s);
    long long bc = countBC(s);
    long long ac = countAC(s);
    long long abc = countABC(s);

    long long ans = total - (ab + bc + ac) + 2 * abc;

    cout << ans << endl;
}