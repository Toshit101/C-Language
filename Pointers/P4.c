// //Program by call of value
// #include <stdio.h>
// int sum(int,int);
// int sum(int a,int b){
    
//     return a+b; 
// }
// int main() {
//     int a = 10;
//     int b = 20;
//     int result = sum(a,b);
//     printf("The sum of a & b is %d\n", result);
//     return 0;
// }
// Program by call by reference
#include <stdio.h>
int sum (int *,int *);
int sum(int* a,int *b)
{*a = 50;
    return (*a+ *b);
}
int main() {
    int a =10;
    int b=20;
    int result = sum(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The sum is%d\n",result);
    return 0;
}