#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0;

    while (getchar() != '\n') count+count+1;

    printf("总共输入:%d\n",count);

    system("pause");
    return 0;
    
}