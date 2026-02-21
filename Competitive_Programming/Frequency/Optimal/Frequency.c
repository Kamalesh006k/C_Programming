#include <stdio.h>
#include <string.h>

char freq(char str[]){
    int hash[26];
    memset(hash,0,sizeof(hash));
    for(int i=0; i<strlen(str); i++){
        hash[str[i] - 'a']++;
    }

    for(int i=0; i<strlen(str); i++){
        if(hash[str[i] - 'a'] == 1){
            return str[i];
        }
    }
    return '\0';
}
void main(){
    char str[26];
    scanf("%s", str);
    printf("%c",freq(str));
}