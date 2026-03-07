#include <iostream>
using namespace std;

int gcd(int a , int b){
     if(b == 0){
        return a;
     }else{
        return gcd(b , a%b);
     }
}

int lcm(int a , int b){
    return (a/gcd(a ,b))*b;
}

int  solve(int n){
    
  int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    } 
    int gc  = arr[0];
    for(int i =1;i<n;i++){
        gc = gcd(gc , arr[i]);
    }
    return gc;
}
int main(){
int n;
  cin>>n;
    int ans  = solve(n);
    cout<<ans<<endl;
}