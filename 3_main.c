//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
int main()
{
    int a,b;
    char c;
    printf("请输入两个整数和一个运算符");
    scanf("%d %d %c", &a,&b,&c);
    switch(c){
        case '+':
        printf("%d\n",a + b);
        break;
        case '-':
        printf("%d\n",a - b);
        break;
        case '*':
        printf("%d\n",a * b);
        break;
        case '/':
        if (b != 0){
        printf("%d\n",a / b);
    }
    else {
        printf("除数不为0");
    }
        break;
    }
    return 0;
}
