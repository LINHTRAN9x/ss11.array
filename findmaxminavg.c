#include <stdio.h>
int main () {
    int arr[5];
    int i, max, min, total = 0;
    float avg;
    for (i = 0,total=0,avg=0; i < 5; i++) {
        printf("enter num %d : ", i + 1);
        scanf("%d", &arr[i]);
        total += arr[i];
        avg = (float) total / i;
        if (i == 0) {
            max = arr[0];
            min = arr[0];
        } else {
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }

    }
        printf("max is : %d", max);
        printf("\nmin is : %d", min);
        printf("\ntotal is : %d", total);
        printf("\nAvg is :%.2f", avg);
}
