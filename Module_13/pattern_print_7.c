#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s, k;
    s = n-1;
    k = 1;
    for (int i = 1; i <= n; i++)
    {       
            for(int j = 1; j <= s; j++){
                printf(" ");
            }
            s--;

            for(int j = 1; j <= k; j++){
                printf("*");
            }
            k = k + 2;
        printf("\n");
    }
    s = 1;
    k = 2*n - 3;
    for(int i = n+1; i <= 2*n -1; i++){

            for(int j = 1; j <= s; j++){
                printf(" ");
            }
            s++;

            for(int j = 1; j <= k; j++){
                printf("*");
            }
            k = k - 2;

            printf("\n");

    }
    return 0;    
}

/*


------------------------------
   *
  ***
 *****
*******
 *****
  ***
   *

-------------------------------

*/