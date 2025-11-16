//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
void owo(int *ptr_arr,int len){
    for(int a = len-1;a>0;a--){
        *(ptr_arr+a)=*(ptr_arr+a-1);
    }
    *ptr_arr=0;
}
int main(){
    int arr[5];
    for(int a=0;a<5;a++){
        scanf("%d",&arr[a]);
    }
    owo(arr,5);
    for(int a=0;a<5;a++){
        printf("%d ",arr[a]);
    }
    return 0;
}
