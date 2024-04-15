#include <stdio.h>
#include <limits.h>
int main(){
    int value, num, tk = INT_MIN ;
    scanf("%d", &value);
    for(int i = 1; i <= value; i++){
        scanf("%d",&num);
        if(tk < num){
            tk = num;
        } else {
            continue;
        }
    }
    printf("%d",tk);
    // int_min > j time a -10^9 theke thatkbe   
    // int_max > jokhon min ber korbo tokon int max ar help nibo > 10^9 hobe starting value 

    // while (value--) > value = 3 > 3,2,1, 0=false&Break
        // while (--value) > value = 3 > 2,1, 0=false&Break
}