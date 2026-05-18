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

bool seeVowels(char ch){
    if(ch == 'a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return true;
    }
  
    return false;

}

void solve() {
    string s;
    cin>>s;
    int l = 0;
    int h = -1;
    int k = 3;
    int ans = 0;
    int count = 0;
    int total = 0;
    int n = s.size();
    while(l<n){
        while (h+1<n && h-l+1 < k ) {
            h++;
            if(seeVowels(s[h])){
                count++;
            }

        }
        if(h - l + 1 == k){
        total += count;
}
        if(l>h){
            h = l-1;
            l++;
        }else{
           if(seeVowels(s[l])) count--;
           l++;
        }
        
    }
    cout<<total<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}