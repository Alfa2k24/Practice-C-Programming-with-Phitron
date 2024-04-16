#include<stdio.h>
int main(){
    long long int eye,mouth,body, min;
    scanf("%lld %lld %lld",&eye, &mouth, &body);

    if( eye < mouth && eye < body){
        min = eye;
    } else if(mouth < eye && mouth < body){
        min = mouth;
    } else if( body < eye && body < mouth){
        min = body;
    }

    long long int eyeValue, mountValue, bodyValue;
    eyeValue = (eye - min) / 2;
    mountValue = mouth - min;
    bodyValue = body - min;

    if( eyeValue <= bodyValue){
        printf("%lld", eyeValue + min);
    } else if (bodyValue < eyeValue){
        printf("%lld", bodyValue + min);
    }
    return 0;
}