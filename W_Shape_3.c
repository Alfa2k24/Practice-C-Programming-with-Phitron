#include<stdio.h>
int main(){
    int num; 
    scanf("%d",&num);
    int space = num - 1;
    int star = 1;

    for(int i = 1; i <= (2*num); i++){
                printf("i=%d s=%d k=%d \n",i,space,star);
        for(int j = 1; j <= space; j++){
            printf(" ");
        }
        for(int j = 1; j <= star; j++){
            printf("*");
        }

        if(i <= num-1){
            space--;
            star += 2;
        } else if (i > num){
            space++;
            star -= 2;
        }
        
        printf("\n");
    }
    return 0;
}

// solution Accepted 