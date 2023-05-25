#include <stdio.h>

int main() {
    int arr[3][4];
    int hang, cot;

    for (hang = 0; hang < 3; hang++) {
        for (cot = 0; cot < 4; cot++) {
            printf("Nhap vao cac so o [%d][%d] ", hang, cot);
            scanf(" %d", &arr[hang][cot]);
        }
    }
    for (hang = 0; hang < 3; hang++) {
        for (cot = 0; cot < 4; cot++) {
            printf("\nCac so o [%d][%d] la %d ", hang, cot, arr[hang][cot]);
        }

    }
}

