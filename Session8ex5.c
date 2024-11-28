#include<stdio.h>
int main(){
    int m,n;
    printf("Nhap hang m : ");
    scanf("%d",&m);
    printf("Nhap cot n : ");
    scanf("%d", &n);
    int arr[m][n];
    int sum =0;
    for(int i = 0;i<m;i++){
        for(int j =0;j<n;j++){
            printf("arr [%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0;i<m;i++){
        for(int j =0;j<n;j++){
            if (i == 0 || i == m-1 || j == n-1 || j ==0){
                sum += arr[i][j];
            }
          
        }
    }
    printf(" tong cua cac phan tu tren duong bien la %d ",sum);
    return 0;
}
