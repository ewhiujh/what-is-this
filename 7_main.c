//202510115202
//2145715545@qq.com
//黄家凤
#include <stdio.h>
void aa(int *arr,int len){
    for(int a=0;a<len-1;a++){
        for(int b=0;b<len-1-a;b++){
            if(*(arr+b)>*(arr+b+1)){
                int c = *(arr+b);
                *(arr+b)=*(arr+b+1);
                *(arr+b+1)=c;
            }
        }
    }
}
int main(){
    int arr[10];
    for(int a=0;a<10;a++){
        scanf("%d",&arr[a]);
    }
    aa(arr,10);
    for(int a=0;a<10;a++){
        printf("%d ",arr[a]);
    }
    return 0;
}
