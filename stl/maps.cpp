#include <bits/stdc++.h>
using namespace std;

// int main(){
//     map<int , string>m;
//     m[1] = "abc";
//     m[5] = "cdc";
//     m[3] = "acd";

//     m.insert({4 , "Afg"})
//     map<int ,string> :: iterator it;

//     for(it  = m.begin(); it != m.end(); ++i)
//     cout<<(*it).first << " " << (*it).second
// }

// // key value pair => maps


// -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
/*Given N strings , print unique strings 
in lexigraphical order with  their
frequency
N<=10^5 
|s| <= 100
*/


int main(){
    unordered_map<string  , int> mt;
    unordered_map <string , int> :: iterator it;
     
    int n;
    cin>>n;
    for(int i  = 0; i<n;++i){
        string s;
        cin >>s;
        mt[s]++;
    } 

    for(auto it  =  mt.begin();it!=mt.end();++it){
        cout<<(*it).first<< " " <<(*it).second<<endl;
    }
}
