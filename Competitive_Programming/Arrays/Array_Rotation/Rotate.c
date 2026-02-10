#include<stdio.h>
void main(){
    int n;
    printf("Enter the size of the Array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Array Elements...\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int l =0, r=n-1;

    while(l<n){
        int temp =arr[r];
        arr[r] = arr[l];
        arr[l] = temp;
        l++;
        r--;
    }

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

}