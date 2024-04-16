#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int value1 = num % 10;
    int value2 = num / 10;
    // printf("%d %d",value1,value2);
    if(value1 % value2 == 0 || value2 % value1 == 0){
        printf("YES");
    } else{
        printf("NO");
    }

    return 0;
}