#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int result=pow(2,32)-1;// pow(m,n)m的n次方
    //int result=pow(2,32)-1; 会被警告并不会得到正确答案

    signed int result_signed=pow(2,31)-1;//singned默认范围为2^31-1

    printf("result=%u\n",result);
    printf("result_signed=%d\n",result_signed);
    
    system("pause");    // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}