#include<stdio.h>

int main(){

    int arr[]={1,2,3,1,5,1,6,1,8,9};
    int maxCount;
    int lengthArr= sizeof(arr)/sizeof(arr[0]);
    int maxItem;
    for(int i = 0;i<lengthArr;i++){
        int count = 0;
        for(int j = 0;j<lengthArr;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxCount){
            maxCount=count;
            maxItem=arr[i];
        }
    }
    printf("Phan tu %d xuat hien lan nhieu nhat %d ",maxItem,maxCount);
    return 0;
}