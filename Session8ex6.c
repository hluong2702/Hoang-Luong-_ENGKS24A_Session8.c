#include<stdio.h>

int main(){

    int m, n;

    printf("Moi ban nhap vao so hang ");
    scanf("%d",&m);

    printf("Moi ban nhap vao so cot ");
    scanf("%d",&n);

    int arr[m][n];
    int sum = 0;
    for(int i = 0;i<m;i++){
        for(int j =0;j<n;j++){
            printf(" arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0;i<m;i++){
        for(int j =0;j<n;j++){
            if(j ==i){
                printf(" duong cheo chinh la \t%d",arr[i][j]);
                sum += arr[i][j];
            }
        }
        printf("\n");
}
    printf("Tong cac phan tu cua duong cheo la %d",sum);

    return 0;
}    