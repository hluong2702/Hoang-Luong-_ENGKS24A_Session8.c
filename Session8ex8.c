#include<stdio.h>

int main(){
    int sum;
    int arr[3][3]={
        {1, 2, 4},
        {3, 4, 7},
        {6, 9, 8}
    };
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            if( i+j==2){
                printf("%d,",arr[i][j]);
                sum += arr[i][j];
            }
        
        }
    }
    printf("Tong cac phan tu cua duong cheo phu la %d ",sum);
    return 0;
}    
