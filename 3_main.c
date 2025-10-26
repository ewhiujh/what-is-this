//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
int main()
{
    int n = 0;
    int a = 2;
    
       scanf("%d",&n);
    if(n < 1 || n >= 50 )
    {
        printf("数字无效");
        return 0;
    }
    while(a<n)
{
    if(n%a==0)
   { 
    break;
   }
    else
    a++;
 }
    if(a < n)
    printf("密钥不安全，请重新输入");
    else
    printf("密钥安全，密码设置成功");
    return 0;
}
