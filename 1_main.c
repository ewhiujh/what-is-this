//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
int main()
{
    int n = 0;
    int a = 0;
    scanf("%d",&n);
    while(1){
    if(n < 1 || n >= 50 )
    {
        printf("数字无效");
        break;
    }
    for(a=2;a<=n;a++)
    {
    if(n%a==0)
      break;
    }
    if(a<n)
      printf("密钥不安全，请重新输入");
    else
      printf("密钥安全，密码设置成功");
      break;
    }
    return 0;
}
