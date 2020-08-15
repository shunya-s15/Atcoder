#include<stdio.h>

int main(){
    int n;
    int l[105];
    int i,j,k;
    int count = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=j+1;k<n;k++){
                if(l[i] != l[j] && l[j] != l[k] && l[k] != l[i]){
                    if(l[i]+l[j]>l[k] && l[j]+l[k]>l[i] && l[k]+l[i]>l[j]){
                        count++;
                    }
                }
            }
        }
    }    
    printf("%d\n",count);
    return 0;
}