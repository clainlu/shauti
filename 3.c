#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 给定一份数据，长度为N ，数据范围是0~ 10000 ，求数据的中位数

void fun(int *num, int N)
{
    int i, j;
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - 1 - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp;
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    if (N % 2 == 1)
        printf("%d\n", num[N / 2]); // 奇数：正中间
    else
        printf("%.1f\n", (num[N / 2 - 1] + num[N / 2]) / 2.0); // 偶数：两数平均
}

int main()
{

    int num = 0;
    return 0;
}