#include <iostream>
using namespace std;


void ans(long long n){
    if(n % 2 != 0 ){
        cout<<0<<endl;
    }else{
        long long ans = 0;
        long long count  = n/2;

        while(count>0){

            ans = ans + count/5;
            count = count/5;

        }
        cout<<ans<<endl;
    }
}

int main(){
  long long n;
  cin>>n;
  ans(n);
}