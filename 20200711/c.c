#include<stdio.h>//N<=10000なのでコメントアウト部分の計算量はO(270000000)で間に合わないらしい。
#include<math.h>
int main(){
    int N;
    scanf("%d",&N);
    int ans[100000];
    int x,y,z,i;
    /*for(i=1;i<=N;i++){
        int count = 0;
        for(x=1;x<=sqrt(i);x++){
            for(y=1;y<=sqrt(i);y++){
                for(z=1;z<=sqrt(i);z++){
                    if((x*x+y*y+z*z+x*y+y*z+z*x) == i){
                        count++;
                    }
                }
            }
        }
        printf("%d\n",count);
    }*/
    for(i=1;i<=N;i++){
        ans[i] = 0;
    }
    for(x=1;x<=sqrt(N);x++){
        for(y=1;y<=sqrt(N);y++){
            for(z=1;z<=sqrt(N);z++){
                i = x*x+y*y+z*z+x*y+y*z+z*x;
                ans[i] = ans[i]+1;
            }
        }
    }
    for(i=1;i<=N;i++){
        printf("%d\n",ans[i]);
    }
    return 0;
}