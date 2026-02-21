#include <stdio.h>
void main(){
    int a[] = {1,2,3,2,1};

    int *p = a;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d ",a[j]);
        }
        printf("\n");
        a[i] = *p + i;
    }

    for(int i=0; i<5; i++){
        printf("%d ",a[i]);
    }
}