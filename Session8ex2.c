#include<stdio.h>

int main(){

    int arr[5]={1,2,3,4,5};
    int num;

    printf("Moi ban nhap vao mot so ");
    scanf("%d",&num);

    int count =0;

    for(int i = 0;i<5;i++){
        if(arr[i]== num ){
            printf("Phan tu %d co trong mang ",num);
            count++;
        }
    }
    if(count == 0){
        printf("Phan tu %d khong co trong mang ",num);
    }
    return 0;
}