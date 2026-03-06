#include <stdio.h>

// int sum(int,int);
int sum(int a,int b){
    return a + b;
}
int main() {
    int a,b ;
    printf("Enter  number a: ");
    printf("Enter  number b: ");
    scanf("%d %d",&a,&b);
       int result = sum(a,b);
    printf("Sum is %d\n",result);

        return 0;
}
