//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
   int aa(int a, int b)
    {
        int c = 1;
        for(int d = 0;d<b;d++)
        {
            c *= a;
        }
        return c;
    }
    int main()
    {
        int e = 0;
        for(int f=1;f<=5;f++)
        {
            e += aa(f,2);
        }
        printf("%d\n",e);
        return 0;
    }
