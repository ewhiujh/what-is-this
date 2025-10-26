//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
int main()
{
    int arr[5];
    int a = 0;
    int b = 0;
    int c = 0;
    while(a<5)
    {
        scanf("%d",&b);
        if(b % 2 == 0)
        {
            arr[a] = b;
            a++;
        }
    }
    for(c=0;c<5;c++)
    {
        if(c==0)
        {
            printf("%d",arr[c]);
        }
        else
        {
            printf(" %d",arr[c]);
        }
    }
    return 0;
}
