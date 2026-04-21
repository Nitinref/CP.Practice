#include <bits/stdc++.h>
using namespace std;

 string trafficSignal(int timer) {

       string ans = "Invalid";

        if(timer == 0){
            return ans = "Green";
        }
        if(timer == 30){
            return ans = "Orange";
        } if(timer > 30 && timer<=90){
            return ans = "Red";
        }


        return ans;
    }


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   int timer;
   cin>>timer;
  string ans =  trafficSignal(timer);
  cout<<ans<<endl;
}