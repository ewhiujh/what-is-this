//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
void owo(int *arr,int a){
    for(int b=0;b<a;b++){
        *(arr+b) += 1;
    }
}
int main(){
    int arr[5];
    for(int b=0;b<5;b++){
        scanf("%d",&arr[b]);
    }
    owo(arr,5);
    for(int b=0;b<5;b++){
        printf("%d ",arr[b]);
    }
    return 0;
}
