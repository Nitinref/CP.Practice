#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ------------------------------->
// int yr() {
//     vector<int> arr = {3, 1, 5, 4};

//     next_permutation(arr.begin() + 1, arr.begin() + 3);

//   for(int i = 0; i < arr.size(); i++){
//     cout << arr[i] << endl;
// }
// }
// //  --------------------------->

// int try(){

//   vector<int>v = {2,3,4,5,6,7};
//   vector<int>:: iterator it = v.begin();
//   for(v.begin() ; it!=v.end() ; ++it){
//     cout<<(*it)<<endl;
//   }
// }  

// for pairs------------------------->

// int maindfv(){
//   vector<pair<int , int>> vp = {{1,2},{32,3},{5,3}};
//   vector<pair<int, int>> :: iterator it;
//   for(it = vp.begin();it!= vp.end();++it ){

//     cout<<(*it).first << " " << (*it).second<<endl;

//   }
// }
int main(){
  vector<pair<int , int>> vp = {{1,2},{32,3},{5,3}};
  vector<pair<int, int>> :: iterator it;
  for(it = vp.begin();it!= vp.end();++it ){

    cout<<(it ->first) << " " << (it->second)<<endl;

  }
}