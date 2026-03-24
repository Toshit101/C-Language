#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter a string\n");
    char A[50];
    char B[50];
    scanf("%s",A);
    printf("Enter string\n");
    for(int i =0;i<49;i++){
        scanf("%c",&B[i]);
        if (B[i] == '\n') {
            break;  // If they hit Enter, JUMP OUT of the loop immediately!
        }
        B[i] = '\0';
    }
    B[50] = '\0';
   int result = strcmp(A, B);

    // 5. THE ANNOUNCEMENT
    if (result == 0) {
        printf("\nSUCCESS: They match!");
    } else {
        printf("\nERROR: They are different. Result was %d", result);
    }
    return 0;
}