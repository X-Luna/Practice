/*写一段程序计算 b 的值，存在以下条件：
a = 1 时，b = a + 1；
a = 2 时，b = a + 7；
a = 4 时，b = a + 10；
a = 5 时，b = a + 6；
a = 7 时，b = a + 4；*/
#include<stdio.h>

int main()
{
    int a,b,i;
    printf("Please enter value for a:");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        i=1;4
        break;
    case 2:
        i=7;
        break;
    case 4:
        i=10;
        break;
    case 5:
        i=6;
        break;
    case 7:
        i=4;
        break;
    default:
        break;
    }
    b=a+i;
    printf("%d\n",b);
    return 0;
}