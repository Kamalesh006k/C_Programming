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
            if(j==n-i+1 || j==n || i==n || i==1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}