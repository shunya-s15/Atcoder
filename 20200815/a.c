#include<stdio.h>

int main(){
    char weather[5];
    scanf("%c%c%c",&weather[0],&weather[1],&weather[2]);
    int i,ans,key;
    ans = 0;
    key = 0;
    for(i=0;i<3;i++){
        if(weather[i] == 'R'){
            key++;
            if(i == 2 && key>ans){
                ans = key;
            }
        }else{
            if(key>ans){
                ans = key;
            }
            key = 0;
        }
    }
    printf("%d\n",ans);
    return 0;
}