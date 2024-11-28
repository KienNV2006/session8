#include<stdio.h>
int main(){
    int array[5] = {4,5,8,12,20};
    int a;
    printf("Moi ban nhap phan tu ma ban muon tim: ");
    scanf("%d", &a);
    int exist = 0;
    for(int i = 0; i < sizeof(array) / sizeof(int); i++){
        if(array[i] == a){
            printf("Vi tri phan tu trong mang la %d\n", i);
            exist = 1;
            break;
        }
    }
    if(exist==0){
        printf("\nKhong ton tai");
    }
}
