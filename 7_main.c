//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
void aa(int arr[],int i)
{
    for(int a = 0;a<i/2;a++)
    {
        int b = arr[a];
        arr[a]=arr[i-1-a];
        arr[i-1-a]=b;
    }
}
   int main()
{
    int arr[5];
    for(int a=0;a<5;a++)
    {
        scanf("%d",&arr[a]);
    }
    aa(arr,5);
    for(int a = 0;a<5;a++)
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
