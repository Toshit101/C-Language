#include <stdio.h>

int main() {
int a,b,temp;
// scrclr();
printf("Enter three numbers\n");
scanf("%d%d",&a,&b);
temp =a;
a=b;
b= temp;
// printf("after swapping%d %d\n\v" ,a,  b);
printf("After swapping:\n");
printf("a = %d\nb = %d\n", a, b);


        return 0;
}