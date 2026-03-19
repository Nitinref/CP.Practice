#include <iostream>
#include <vector>
using namespace std;

void girlfriend(long long n){

    if(n == 1){
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }

    if(n == 2){
        cout << 1 << endl;
        cout << 1 << " " << 1 << endl;
        return;
    }

    vector<int> isPrime(n+2,1);

    for(int i = 2; i <= n+1; i++){
        if(isPrime[i] == 1){
            for(int j = 2*i; j <= n+1; j += i){
                isPrime[j] = 2;
            }
        }
    }

    cout << 2 << endl;

    for(int i = 2; i <= n+1; i++){
        cout << isPrime[i] << " ";
    }

    cout << endl;
}

int main(){
    long long n;
    cin >> n;
    girlfriend(n);
}
