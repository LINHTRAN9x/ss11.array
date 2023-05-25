#include <stdio.h>

int main(){
    char array[5];
    int i;
    printf("Enter string : ");
    scanf("%s",array);
    printf("\nThe string is %s \n\n",array);

    for (i=0;i<5 ; i++)
        printf("\t%d",array[i]);
}