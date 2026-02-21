#include <stdio.h>
int fun(int n, int acc){
    if(n==0) return acc;
    printf("%d ",n);

    return fun(n-1,acc+n);
}
void main(){
    int res = 0;
    for(int i=2; i<4; i++){
        res+=fun(i,0);
    }
    printf("%d", res);
}