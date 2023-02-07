#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,sum=0;

    while (sum<=100)
    {
        sum=sum+1;
        i=i+1;
    }

    printf("answer:%d\n",i);

    system("pause");
    return 0;  
}