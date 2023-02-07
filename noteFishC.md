# 小甲鱼课程笔记

## p3 变量和常量
`
printf("圆周率是%.2f\n",c);//.2表示精确到小数点两位
printf("精确圆小数点后9位周率是%ll.9f\n",d);//11表示总字符总站宽度
`

## p4常量和宏定义
常量不可变
`#define 标识符 常量`

标识符就是一切的名字
C语言大小写敏感

## p5数据类型
获取数据类型或表达式长度
`
sizeof(object);
sizeof(type_name);
sizeof object(对象或变量名);
`

### signed and unsigned
限定符,signed不带符号
`
[singned] int
unsigned int
`

## p6取值范围
`
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
`

## p7字符与字符串
字符串
`
char name[大小]

name [0]='XXX'
`

## p8 算数运算符
### 类型转换

## p9 关系运算符与逻辑运算
`&& 与
|| 或
! 非`
