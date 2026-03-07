// https://maang.in/problems/Divide-the-Piles-67?resourceUrl=pl4821-rs67&returnUrl=%5B%22%2Fcohorts%2FAZ-Premium-Cohort-13-64%3Ftab%3Dassignments%22%5D
#include <iostream>
using namespace std;

int gcd(int a , int b){
    if(b == 0){
        return a;
    }
    return gcd(b , a % b);
}

void solve(int arr[], int n){
    int gc = arr[0];

    for(int i = 1; i < n; i++){
        gc = gcd(gc, arr[i]);
    }

    if(gc >= 2){
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        solve(arr, n);
    }
}