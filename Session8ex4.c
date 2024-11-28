#include<stdio.h>

int main(){

    int arr[3][3]={
        {1, 2, 4},
        {3, 4, 7},
        {6, 9, 8}
    };

    int max= arr[0][0];

    for(int i = 0;i<3;i++){
        for(int j = 0; j < 3;j++){
            if(arr[i][j]>max){
            max = arr[i][j];
        }
        }
    }
    printf("Max %d ",max);
    return 0;
}