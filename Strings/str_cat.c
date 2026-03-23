#include <stdio.h>
#include <string.h>
int main(){
    char st1[20] = "b";
    char st2[] = "at";
    strcat(st1,st2);
    printf("The string is %s",st1);
    return 0;
    
}