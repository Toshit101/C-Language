#include <stdio.h>

int main() {
    int a = 10;
    int *b = &a;
    int **c = &b;
    printf("The output is %d\n",a);
    printf("The output is %d\n",*b);
    printf("The output is %d\n",*(&a));
    return 0;
}