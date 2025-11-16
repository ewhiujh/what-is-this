//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int *p = &a;
    *p += 10;
    printf("%d,%d\n",a,*p);
    return 0;
}
