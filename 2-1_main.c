#include <stdio.h>
int main()
{
    int n = 0;
    int a = 0;
    scanf("%d",&n);
    for(a=2;a<=n;a++)
    {
    if(n%a==0)
    break;
    }
    if(a<n || n>=50)
    printf("密钥不安全，请重新输入");
    else
    printf("密钥安全，密码设置成功");
    return 0;
}
