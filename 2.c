/*2、	写一段程序计算 1  ~  99 之间 99 位数的和。*/
#include<stdio.h>

int main()
{
    int i,j;
    j=0;
    for ( i = 0; i < 100; i++)
    {
        j=j+i;
    }
    printf("%d\n",j);
    return 0;
}