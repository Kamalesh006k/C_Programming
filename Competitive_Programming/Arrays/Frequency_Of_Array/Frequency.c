#include<stdio.h>
void selectionSort(int arr[],int n){
        for(int i=0; i<n-1; i++){
            int mini = i;
            for(int j=i+1; j<n; j++){
                if(arr[j]<arr[mini]){
                    mini = j;
                }
            }
            int temp = arr[i];
            arr[i]= arr[mini];
            arr[mini] = temp;
        }
    }
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
    int l=0, h=0;
    int count =0;
    while(l<n && h<n){
        if(arr[l] == arr[h]){
            h++;
            count++;
        }else{
            printf("%d -> %d \n",arr[l],count);
            count=0;
            l=h;
        }
    }
    printf("%d -> %d",arr[l],count);
}