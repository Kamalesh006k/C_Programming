#include <stdio.h>
void main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=n-i+1; j<=n; j++){
            if(j==n-i+1 || j==n){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=i; j++){
            printf(" ");
        }
        for(int j=1; j<=n-i; j++){
            if(j==1 || j==n-i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}