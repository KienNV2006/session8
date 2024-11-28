#include<stdio.h>
int main() {
    int n;
    printf("Moi ban nhap so nguyen: ");
    scanf("%d", &n);
    int array[n][n];
    printf("Moi ban nhap cac phan tu cho ma tran %dx%d:\n", n, n);
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Nhap phan tu tai [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("Ma tran la:\n");
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}