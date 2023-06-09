#include <stdio.h>

int main() {
    float store[7];
    int budget = 5000000VND;
    int i;
    float total = 0, high = 0;
    char a;
    printf("Budget each week: 5000000VND\n");
    do{
        total = 0;
        for (i = 0; i < 7; i++) {
            printf("\nExpenses day %d : ", i + 2);
            scanf("%f", &store[i]);
            total += store[i];
            if (store[i] > high)
                high = store[i];
        }
        if (total>budget) {
            printf("----------------Summary---------------\n");
            printf("Expenses exceed the budget.\n");
        }
        else {
            printf("----------------Summary---------------\n");
            printf("Expenses are within the budget\n");
        }
        printf("Total weekly expenses : %.2fVND\n", total);
        printf("Highest expense: %.2fVND\n", high);
        printf("Do you want to enter expenses again (Y/N): ");
        scanf(" %c", &a); 
    }while (a == 'y'|| a=='Y');
}
