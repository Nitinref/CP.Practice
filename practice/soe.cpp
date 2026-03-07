class Solution {
public:

    #define NUMX 1000000
    int pre[NUMX+1];

    void pr(){

        for(int i = 2; i <= NUMX; i++){
            pre[i] = i;
        }

        for(int i = 2; i <= NUMX; i++){
            if(pre[i] == i){
                for(int j = 2*i; j <= NUMX; j += i){
                    if(pre[j] == j){
                        pre[j] = i;
                    }
                }
            }
        }

    }

    int countPrimes(int n) {

        if(n <= 2) return 0;

        pr();

        int count = 0;

        for(int i = 2; i < n; i++){
            if(pre[i] == i){
                count++;
            }
        }

        return count;

    }
};