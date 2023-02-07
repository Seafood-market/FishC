//常量和宏定义

#include <stdio.h>

#define URL "zl.getmc.cn"
#define NAME "Awacorn"
#define BOSS "橡果子"
#define YEAR "2022"
#define MONTH "1"
#define DAY "12"

int main()
{
    printf("%s成立于%d年%d月%d日",NAME,YEAR,MONTH,DAY);
    printf("%s服主是\n",BOSS);
    printf("服务器地址是:%s\n",URL);

    system("pause");    // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}