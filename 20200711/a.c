#include<stdio.h>
int main(){
    int L,R,d;
    scanf("%d%d%d",&L,&R,&d);
    int x = R/d;
    int y = (L-1)/d;
    int ans = x-y;
    printf("%d\n",ans);
    return 0;
}