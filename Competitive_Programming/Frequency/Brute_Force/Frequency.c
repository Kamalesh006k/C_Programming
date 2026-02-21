#include <stdio.h>
#include <string.h>
char count(char str[]){
    for(int i=0; i<strlen(str); i++){
        int count =0;
        for(int j=0; j<strlen(str); j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        if(count==1){
            return str[i];
        }
    }
    return '\0';
}
void main(){
    char str[20];
    scanf("%s",str);
    printf("%c",count(str));
}