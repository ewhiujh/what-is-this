//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
int main()
{
    int arr[10];
    int a = 0;
    for(a = 0;a<10;a++)
    {
        scanf("%d",&arr[a]);
    }
    int b = 0;
    for(a = 0;a<9;a++)
    {
        for(b=0;b<9-a;b++)
        {
            if(arr[b] > arr[b+1])
            {
                int c = 0;
                c = arr[b];
                arr[b] = arr[b+1];
                arr[b+1] = c;
            }
        }
    }
    for(a = 0;a<10;a++)
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
