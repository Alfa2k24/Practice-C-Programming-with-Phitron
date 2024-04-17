#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];

    for(int i = 0; i < num; i++){
        scanf("%d",&arr[i]);
        // printf("%d ", arr[i]);
    }
    for(int j = 0; j < num; j++){
        if( arr[j] <= 10){
             printf("A[%d] = %d\n", j, arr[j]);
        }
    }
}