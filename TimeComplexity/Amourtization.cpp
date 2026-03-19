int ans =0;
int i = 0;
while(i < N){ 
    while(i<N && arr[i]!=v){
        i++;
        if(i<N){
            ans++;
        }
    }
}