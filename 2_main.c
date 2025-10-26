//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 100;
    int c = 0;
    int d = 0;
    int e = 0;
    for(b=100;b<999;b++)
 {
        c=b/100;
        d=b%100/10;
        e=b%100%10;
        if(c * c * c + d * d * d + e * e * e == b)
    {
            if(a == 0)
        {
            printf("%d",b);
        }
        
        else
        {
            printf(" %d",b);
        }
        a++;
    }
 }
    return 0;
}
