//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请输入三条整数边长：");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        printf("可以组成三角形\n");
    }
    else {
        printf("不能组成三角形\n");
    }

    return 0;
}
