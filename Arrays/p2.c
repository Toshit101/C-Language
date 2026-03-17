#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of arrays\n");
    scanf("%d",&n);
    int marks[n];
    printf("Enter your marks\n");

    for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);

    }
    printf("Successfully stored %d marks!\n", n);
    
    return 0;
}