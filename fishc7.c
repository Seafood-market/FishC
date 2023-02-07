#include <stdio.h>

int main()
{
    char a='c';

    //字符串
    char name[]={'A','c','o','r','n','\0'};// 一定要给\0加位置否则乱码

    printf("%c = %d\n",a,a);
    printf("%s\n",name);

    system("pause");
    return 0;
}