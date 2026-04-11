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

int solve(vector<int>& piles, int h) {
    int k = 1;
    while(true){
        for(int pile:piles){
     
        int totalHours += (pile + k - 1) / k;

               if(totalHours <= h){
                return k; 
            }

            k++;
        
        }
    }
   return k;


}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h ;
    cin>>h;
    vector<int>pile;
    for(int i= 0;i<100000;i++){
        cin>>pile[i];
    }

  int ans =   solve(pile , h);
  cout<<ans<<endl;

    return 0;
}