#include <stdio.h>

int main() {
    printf("Enter 5 numbers\n");
    int array[5];
    for(int i = 0;i<5;i++){
        // printf("Enter 5 numbers\n");
        scanf("%d",&array[i]);
    }
    printf("The number at index 1 amd 2 is %d %d\n",array[1],array[2]);
    return 0;
}