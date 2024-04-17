#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int arr[num];

    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
        // printf("%d ", arr[i]);
    }

    int value; 
    scanf("%d", &value);
    // printf("%d",value);
    int ans = -1;
    for(int j = 0; j < num; j++){
        if( arr[j] == value){
            ans = j;
            break;
        }
    }
    printf("%d", ans);
    return 0;
}