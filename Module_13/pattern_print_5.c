#include<stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    for(int i = 0; i < n; i++){

        for(int j = 1; j <= n-i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}


/*
 Solution Accepted 


 ---------------
1 2 3 4 5 6 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 

 ----------------


*/