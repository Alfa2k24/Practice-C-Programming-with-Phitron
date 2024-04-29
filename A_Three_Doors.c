#include<stdio.h>

void solve(){

    int key;
    scanf("%d",&key);
    int arr[4];
    for(int i = 1; i <= 3; i++){
        scanf("%d",&arr[i]);
    }

    if(arr[key] == 0){
        printf("NO\n");
        return;
    }

    key = arr[key];

    if(arr[key] == 0){
        printf("NO\n");
        return;
    }
    printf("YES\n");
}

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        solve();
    }
    
}