#include <stdio.h>
int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;
    int sum = 0;
    printf("Cac phan tu tren duong cheo phu la: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i][n-1-i]);
        sum += arr[i][n-1-i];
    }
    printf("\n");
    printf("Tong cac phan tu tren duong cheo phu la: %d", sum);
    return 0;
}
