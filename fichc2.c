#include <stdio.h>

int main(){
    // 变量声名
    int a;
    char b;
    float c;
    double d;

    a=520;
    b='f';
    c=3.14;
    d=3.141592653;
    
    printf("Acorn%d\n",a);
    printf("i hate %cvv!\n",b);
    printf("圆周率是%.2f\n",c);
    printf("精确圆小数点后9位周率是%.9f\n",d);

    system("pause");    // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}