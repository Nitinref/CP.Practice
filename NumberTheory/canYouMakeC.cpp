// https://maang.in/problems/Can-You-Make-C-66?resourceUrl=pl4821-rs66&returnUrl=%5B%22%2Fcohorts%2FAZ-Premium-Cohort-13-64%3Ftab%3Dassignments%22%5D
#include <iostream>
using namespace std;
long long mod = 1e9+7;
long long  gcd(long  a  , long b){
 if(b == 0){
    return a;
 }else{
    return ((gcd(b  , a%b))%mod)%mod;
 }
}

int main(){
    int t;
    cin>>t;
    long long a,b,c;
    long long ans;
    while(t--){
     cin>>a>>b>>c;
     ans = gcd(a,b);
       if(c%ans == 0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
    }

  

}

