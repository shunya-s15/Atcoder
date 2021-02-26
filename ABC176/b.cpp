#include<stdio.h>
char n[200005];
int main(){
    int i,ans;
    ans = 0;
    for(i=0;i<200005;i++){
        n[i] = '0';
    }
    scanf("%s",&n);
    for(i=0;i<200005;i++){
        if(n[i] == '1'){
            ans = ans+1;
        }else if(n[i] == '2'){
            ans = ans+2;
        }else if(n[i] == '3'){
            ans = ans+3;
        }else if(n[i] == '4'){
            ans = ans+4;
        }else if(n[i] == '5'){
            ans = ans+5;
        }else if(n[i] == '6'){
            ans = ans+6;
        }else if(n[i] == '7'){
            ans = ans+7;
        }else if(n[i] == '8'){
            ans = ans+8;
        }else if(n[i] == '9'){
            ans = ans+9;
        }
    }
    if(ans%9 == 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}