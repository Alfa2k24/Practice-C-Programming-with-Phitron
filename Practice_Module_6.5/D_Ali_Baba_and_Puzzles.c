#include<stdio.h>
int main(){
    long long int a,b,c,d;
    // scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    //printf("%d %d %d %lld",a,b,c,d);
    
    while(scanf("%lld %lld %lld %lld",&a,&b,&c,&d) != EOF){
    if(a + b - c == d || a - b + c == d){
        printf("YES");
        // printf("YES = %lld",d);
    } else if(a * b + c == d  ||  a + b * c == d){
        printf("YES");
        // printf("YES = %lld",d);
    } else if(a - b * c == d  ||  a * b - c == d){
        printf("YES");
        // printf("YES = %lld",d);
    } else{
        // printf("NO = %lld",d);
        printf("NO");
    }
    }
    return 0;
    // solved 
}