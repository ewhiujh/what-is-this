//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a =*b;
    *b = temp;
}
int main(){
    int c,d;
    scanf("%d %d",&c,&d);
    swap(&c,&d);
    printf("%d %d\n",c,d);
    return 0;
}
