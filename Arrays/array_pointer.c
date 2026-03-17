#include <stdio.h>

int main() {
    int marks[] = { 20,23,56,70,85,94,};
    int *ptr = &marks[0];
    for(int i =0;i<6;i++)
    {
        printf("The marks of index %d are %d\n",i,*ptr);
        ptr++;
    }
    return 0;
}