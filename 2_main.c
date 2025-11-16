//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
int main(){
    int arr[5];
    for(int a = 0;a<5;a++){
        scanf("%d",&arr[a]);
    }
    int *p = arr;
    for(int a = 0;a<5;a++){
        *(p+a)*=2;
    }
    for(int a = 0;a<5;a++){
        printf("%d ",arr[a]);
    }
    return 0;
}
