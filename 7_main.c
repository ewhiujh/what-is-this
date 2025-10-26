//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
int main()
{
    int arr[5];
    int a = 0;
    for(a=0;a<4;a++)
    {
        scanf("%d",&arr[a]);
    }
    a = 4;
    while(a>0)
    {
        arr[a] = arr[a-1];
        a--;
    }
    arr[0] = 0;
    for(a=0;a<5;a++)
    {
        if(a==0)
        {
            printf("%d",arr[a]);
        }
        else
        {
            printf(" %d",arr[a]);
        }
    }
    return 0;
}
