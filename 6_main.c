//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr=(int*)malloc(5*sizeof(int));
    for(int a=0;a<5;a++){
        scanf("%d",ptr+a);
    }
    for(int a=0;a<5;a++){
        printf("%d ",*(ptr+a));
    }
    free(ptr);
    ptr = NULL;
    return 0;
}
