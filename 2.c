#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 编写程序，区分当前运行设备是大端还是小端




int main()
{
    union 
    {
       unsigned int a;
        unsigned char s[4];
    }data;
    data.a = 0x12345678;
    if(data.s[0] == 0x78)
        {
            printf("小端序");
        }
    else if(data.s[0] == 0x12)
        {
            printf("大端序");
        }
    
    return 0;
}