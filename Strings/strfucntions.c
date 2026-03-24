#include <stdio.h>
#include <string.h>

int main() {
    char A[]= "Toshit ";
    char B[50];
    char C[] = "Apple";
    char D[] = "banana";
 strcpy(B, A);//Copying String A to string B
 strcat(B, A);//Adding two strings
 int c =strcmp(C,D);// Comparing ASCII values
 printf("%s\n",B);
 printf("%d\n",c);
    return 0;
}

