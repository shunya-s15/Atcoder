#include<stdio.h>
int h,w;

int goalh,goalw;
char s[1005][1005];
int mahou(int h,int w){
    if(s[h][w+1] == '.'){
        mahou(h,w+1);
    }
}
int main(){
    int positionh,positionw;
    scanf("%d%d",&h,&w);
    scanf("%d%d",&positionh,&positionw);
    scanf("%d%d",&goalh,&goalw);
    int i,j;
    for(i=1;i<=h;i++){
        for(j=1;j<=w;j++){
            scanf("%c",&s[i][j]);
        }
    }
}