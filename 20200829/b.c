#include<stdio.h>

int main(){
    char s[1005];
    char t[1005];
    int i;
    for(i=0;i<1005;i++){
        s[i] = '0';
        t[i] = '0';
    }
    scanf("%s",&s);
    scanf("%s",&t);
    int slen,tlen;
    for(slen=0;s[slen] != '0';slen++){

    }
    slen = slen-1;
    //printf("%d\n",slen);
    for(tlen=0;t[tlen] != '0';tlen++){

    }
    tlen = tlen-1;
    //printf("%d\n",tlen);
    int j = 0;
    i = 0;
    int max = 0;
    int key = 0;
    for(i=0;i <= slen-tlen;i++){
        for(j=0;j<tlen;j++){
            if(s[i+j] == t[j]){
                key++;
            }
        }
        if(key>max){
            max = key;
        }
        if(max == tlen){
            break;
        }
        key = 0;
    }
    printf("%d\n",tlen-max);
    return 0;
}