#include <stdio.h>

void dividableEven(int num);

void dividableEven(int num){
    if(num > 2 && num % 2 == 0)
        printf("YES");
    else
        printf("NO");
}

int main()
{
    int num;
    scanf("%d", &num);
    dividableEven(num);
    return 0;
}

