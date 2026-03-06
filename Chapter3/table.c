#include <stdio.h>

int main() {
int i =1;
int num;
printf("Enter a num \n");
scanf("%d",&num);
for(i;i<=10;i++)
printf("The multiplication of %d and %d is %d\n", num, i, num*i);
        return 0;
}