//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
int main()
{
    int arr[3][3];
    for(int a=0;a<3;a++)
    {
        scanf("%d %d %d",&arr[a][0],&arr[a][1],&arr[a][2]);
    }
    for(int a=0;a<3;a++)
    {
        printf("%d %d %d\n",arr[a][0],arr[a][1],arr[a][2]);
    }
    return 0;
}
