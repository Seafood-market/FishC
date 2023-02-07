#include <stdio.h>

int main()
{
    int i;

    printf("how old are you:");
    scanf("%d",&i);

    if (i>=18)
    {
        printf("嘿嘿嘿~\n");
    }
    
    system("pause");
    return 0;
}