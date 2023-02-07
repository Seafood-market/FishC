#include <stdio.h>

int main()
{
    char ch;
    printf("scorr:");
    scanf("%c",&ch);

    switch (ch)
    {
        case 'A':printf("more than 90\n");break;
        case 'B':printf("80~90\n");break;
        case 'C':printf("70~80\n");break;
        case 'D':printf("60~70\n");break;
        case 'E':printf("under 60\n");break;
        default:printf("False");break;
    }

    system("pause");
    return 0;
}