#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int space = num - 1;
    int star = 1;
    for(int i = 1; i <= num; i++){

        for(int j = 1; j <= space; j++){
            printf(" ");
        }
        space--;

        for(int j = 1; j <= star; j++){
            printf("*");
        }
        star += 2;
        printf("\n");
    }
    return 0;
}


// Accepted 