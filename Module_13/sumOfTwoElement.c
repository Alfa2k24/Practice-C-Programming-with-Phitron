#include<stdio.h>
#include<string.h>
int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i <  n; i++){
        scanf("%d",&arr[i]);
    }
    int value; 
    scanf("%d",&value);

    int flag = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == value){
                flag++;
            }
        }
    }

    if(flag == 0){
        printf("No");
    }
    else{
        printf("YES");
    }

}


// accepted 