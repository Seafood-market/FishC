#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;
char word[2000] [10],sorted[2000] [10];

int cmp_char(const void* _a,const void* _b)
{
    char* a=(char*)_a;
    char* b=(char*)_b;
    return *a-*b;
}

int cmp_string(const* _a,const* _b)
{
    char* a=(char*)_a;
    char* b=(char*)_b;
    return strcmp(a,b);
}

int main()
{
    n=0;
    for(;;)
    {
        scanf("%s",word[n]);
        if(word[n][0]=='*') break;
        n++;
    }
    qsort(word,n,sizeof(word[0]),cmp_string);
    for(int i=0;i<n;i++)
    {
        strcpy(sorted[i],word[i]);
        qsort(sorted[i],strlen(sorted[i]),sizeof(char),cmp_char);
    }
    char s[10];
    while (scanf("%s",s)==1){
        qsort(s,strlen(s),sizeof(char),cmp_char);
        int found=0;
        for(int i=0;i<n;i++)
        if(strcmp(sorted[i],s)==0){
            found=1;
            printf("%s",word[i]);
        }
        if(!found) printf(":(");
        printf("\n");
    }
    
    system("pause");    // 防止运行后自动退出，需头文件stdlib.h
    return 0;

}