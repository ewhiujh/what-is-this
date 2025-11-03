//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
int aa(int a1,int an,int step)
{
    int b = ((an-a1)/step)+1;
    return (a1+an)*b/2;
}
int main()
{
    int bb = aa(1,100,1);
    printf("%d\n",bb);
    return 0;
}
