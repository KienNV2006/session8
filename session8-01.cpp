#include <stdio.h>
int main(){
    int array[5] = {9,20,31,24,26};
    printf("Cac phan tu trong mang tu cuoi ve dau:\n");
    for(int i = sizeof(array) / sizeof(int) - 1; i >= 0; i--){
        printf("%d ", array[i]);
    }
    return 0;
}
