#include <stdio.h>
#include <string.h>

int main() {
    char A[] = "Banana";
    char B[] = "Apple";
    int a = strcmp(B,A);
    printf("%d",a);
    return 0;
}