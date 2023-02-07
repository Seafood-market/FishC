#include <stdio.h>

int main()
{
    int a,b;

    printf("please input 2 number:");
    scanf("%d %d",&a,&b);

    if (a!=b)
    {
        if (a>b)
        {
            printf("%d > %d\n",a,b);
        }
        else
        {
            printf("%d<%d\n",a,b);
        }
    }
    else
    {
        printf("%d=%d\n",a,b);
    }    

    system("pause");
    return 0;
}