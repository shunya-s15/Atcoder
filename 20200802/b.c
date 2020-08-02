#include<stdio.h>
typedef long long ll;

struct position{
    ll x;
    ll y;
};
int main(){
    ll n,d;
    scanf("%lld%lld",&n,&d);
    ll i;
    struct position pq[200005];
    for(i=0;i<n;i++){
        scanf("%lld%lld",&pq[i].x,&pq[i].y);
    }
    ll distance,key;
    ll count = 0;
    key = d*d;
    for(i=0;i<n;i++){
        distance = pq[i].x*pq[i].x + pq[i].y*pq[i].y;
        if(key>=distance){
            count++;
            //printf("x=%lld,y=%lld\n",pq[i].x,pq[i].y);
        }
    }
    printf("%lld\n",count);
    return 0;
}