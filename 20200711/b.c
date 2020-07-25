#include<stdio.h>
int main(){
    int N;
    int a[200];
    int count = 0;
    scanf("%d",&N);
    int i;
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    if(N%2==0){
        for(i=0;i<N/2;i++){
            if(a[2*i]%2==1){
                count++;
            }
        }
    }else{
        for(i=0;i<N/2+1;i++){
            if(a[2*i]%2==1){
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}