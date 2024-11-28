#include <stdio.h>
int main() {
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int sum = 0;
    int n = 3;
    for (int i=0; i < n; i++) {
        sum+=arr[0][i];
        sum+=arr[n-1][i];
    }
    for (int j = 1; j < n-1; j++) {
        sum+= arr[j][0];
        sum+= arr[j][n-1];
    }
    printf("Tong cac phan tu duong bien la: %d\n", sum);
    return 0;
}
