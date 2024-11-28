#include<stdio.h>

int main(){

    int m, n;

    printf("Moi ban nhap vao so hang ");
    scanf("%d",&m);

    printf("Moi ban nhap vao so cot ");
    scanf("%d",&n);

    int arr[m][n];

    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            printf("arr [%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    return 0;
}