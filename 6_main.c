//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
int aa(int arr[],int i)
{
    int a = 0;
    for(int c = 0;c<i;c++)
    {
        a += arr[c];
    }
    return a;
}
int bb(int arr[],int i)
{
    int b = 1;
    for(int c = 0;c<i;c++)
    {
        b *= arr[c];
    }
    return b;
}
int main()
{
    int arr[5];
    for(int c=0;c<5;c++)
    {
    scanf("%d",&arr[c]);
    }
    int a = aa(arr,5);
    int b = bb(arr,5);
    printf("%d %d\n",a,b);
    return 0;
}
