#include <stdio.h>
int main(){
    // Method : 1
    // int number;
    // while( scanf("%d",&number)){
    //     if(number == 1999){
    //         printf("Correct\n");
    //         break;
    //     } else{
    //         printf("Wrong\n");
    //     }
    // }


    // Method : 2
    while (1){ // while(1) = true 
        int num;
        scanf("%d",&num);
                if(num == 1999){
            printf("Correct\n");
            break;
        } else{
            printf("Wrong\n");
        }
    }
    return 0;
}