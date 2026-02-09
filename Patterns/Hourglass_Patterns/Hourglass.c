#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i-1; j++){
            printf(" ");
        }
        for(int j=i; j<=n; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=2; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}