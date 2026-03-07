#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

void solve(int k[], int n){

    int gc = k[0];

    for(int i = 1; i < n; i++){
        
        gc = gcd(gc, k[i]);
    }

    cout << gc << endl;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        int k[n];

        for(int i = 0; i < n; i++){
            cin >> k[i];
        }

        solve(k, n);
    }

    return 0;
}