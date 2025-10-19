//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
int main()
{
    int b;
    printf("请输入学生成绩:");
    scanf("%d",&b);
    if (b >= 90 && b <= 100){
        printf("A\n");
    }
    else if (b >= 80 && b <= 89){
        printf("B\n");
    }
    else if (b >= 70 && b <= 79){
        printf("C\n");
    }
    else if(b >= 60 && b <= 69){
        printf("D\n");
    }
    else if(b >= 0 && b <= 59){
        printf("E\n");
    }
     else {
        printf("请输入0-100内的整数成绩\n");
    }
    
    return 0;
}
