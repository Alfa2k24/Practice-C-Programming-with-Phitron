#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i = 0; i < number; i++){
        scanf("%d",&arr[i]);
        // printf("%d ",arr[i]);
    }
    for(int j = number - 1; j >= 0; j--){
        printf("%d ",arr[j]);
    }
    return 0;
}