#include <iostream>
using namespace std;

#define MAXN 100000

long long prec[MAXN + 1];

void pre(){
  for(long long i = 2;i<=MAXN;i++){
       prec[i] = i;
  }

  for(long long i = 2;i<=MAXN;i++){
    if(prec[i] == i){
        
    }
  }
}