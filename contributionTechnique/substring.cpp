#include <bits/stdc++.h>
using namespace std;

#define int long long

bool isVowel(char c) {
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

void solve(string s) {
    int n = s.size();
    int ans = 0;
    for(int i=0;i<n;i++){
        set<string>st;

        for(int j = i;j<n;j++){
            if(!isVowel(s))   break;
            st.insert(s);
            if(st.size() == 5){
               ans++;
            }
        }
    }
    return ans
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    solve(s);
}