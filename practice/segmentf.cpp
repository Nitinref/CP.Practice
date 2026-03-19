#include <iostream>
using namespace std;
#include <vector>
#include <cmath>

vector<long long>check(r-l+1)
void seive(long long l, long long r) {

   long long root = sqrt(r);
   vector<bool>prime(root , true);
   prime[0] = 0;
   prime[1] = 0;
  
   for(int i = 0;i*i<prime.size();i++){
      if(i == 1){
           for(int j = 2;j*j<prime.size();j+=i){
               prime[j] = 0;
            }

        }
    }

}


    int main(){

    long long l;
    long long r;
    cin >> l >> r;

    seive(l, r);
}
// vector root r =?size
// usme se jo bhi prime hai use doosre vecttore me daaldo
//