#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;

long long solve(string s)
{
    long long n = s.length();
    long long ans = 0;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        long long cont = n * (n + 1) / 2;
        long long last = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ch)
            {
                long long len = i - last - 1;
                if(len>0){
                cont -= (len * (len + 1) / 2);
                }
                last = i;

            }
        }

        long long len = n - last - 1;
        if(len>0){
        cont -= (len * (len + 1) / 2);
        }
        ans += cont;
    }

    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    solve(s);

    return 0;
}