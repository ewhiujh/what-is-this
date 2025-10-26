//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
int main()
{
    int arr[5];
    int a = 0;
    int b = 0;
    while(a<4)
    {
        scanf("%d",&arr[a]);
        b += arr[a];
        a++;
    }
    arr[4] = b;
    a = 0;
    while(a<5)
    {
        if(a == 0)
        {
        printf("%d",arr[a]);
        }
        else
        {
            printf(" %d",arr[a]);
        }
        a++;
    }
    return 0;
}
