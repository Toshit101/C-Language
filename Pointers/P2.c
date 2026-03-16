#include <stdio.h>

int main() {
    char a ='A';
    char* j = &a;
     float d = 129893.8373;
     float* f = &d;
     printf("A is %c\n", a);
     printf("Adress of A is %p\n", &a);
     printf("Address of A is %p\n", j);
     printf("D is %.2ff\n",d);
     printf("Address of d is %p\n", &d);
     printf("Address of d is %p\n", f);
    return 0;
}