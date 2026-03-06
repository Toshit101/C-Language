#include <stdio.h>

int main() {
    int i, j;

    for(i = 0; i < 7; i++) {

        // G
        for(j = 0; j < 7; j++) {
            if((i==0 && j>0) || (i==6 && j>0) || (j==0 && i>0 && i<6) || (i>=3 && j==4) || (i==3 && j>=3))
                printf("*");
            else
                printf(" ");
        }

        printf("  ");

        // C
        for(j = 0; j < 7; j++) {
            if((i==0 && j>0) || (i==6 && j>0) || (j==0 && i>0 && i<6))
                printf("*");
            else
                printf(" ");
        }

        printf("  ");

        // E
        for(j = 0; j < 7; j++) {
            if(j==0 || i==0 || i==3 || i==6)
                printf("*");
            else
                printf(" ");
        }

        printf("  ");

        // T
        for(j = 0; j < 7; j++) {
            if(i==0 || j==3)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}