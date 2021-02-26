#include<stdio.h>
int main(){
    int n,x,t,ans;
    scanf("%d%d%d",&n,&x,&t);
    if(n%x == 0){
        ans = (n/x)*t;
    }else{
        ans = (n/x + 1)*t;
    }
    printf("%d\n",ans);
    return 0;
}