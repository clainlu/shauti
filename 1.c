#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 给定字符串，去除重复字母后重新输出，如输入s=”abcaadc” ，输出s=”abcd” ,其中s长度小于等于10000 ;

void fun1(char str[10000])
{
    int length = strlen(str);
    int count = 0;
    char dest[256] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        if (!dest[c])
        {
           dest[c] = 1;
           dest[count++] = str[i];
        }
    }
   
    printf("%s\n",dest);
    
}

int main()
{
    printf("请输入字符串:");
    char str[10000];
    scanf("%9999s",str);
    fun1(str);
    return 0;
}