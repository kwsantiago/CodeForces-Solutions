#include <stdio.h>
#include <string.h>

int main(){
    int i, n;
    char string[101];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s", string);
        if(strlen(string) > 10){
            printf("%c%d%c\n", string[0],(int)strlen(string)-2,string[(int)strlen(string)-1]);
        }
        else
            printf("%s\n", string);
    }
    return 0;
}
