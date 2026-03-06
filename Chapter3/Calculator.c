#include <stdio.h>

int main()
{
    int Case;
    printf("Enter any case");
    scanf("%d", &Case);
    int sum, multi, div, sub;
    int a, b;
    printf("Enter two numbers \n");
    scanf("%d%d", &a, &b);
    switch (Case)
    {
    case 1:
        sum = a + b;
        printf("The sum is %d\n", sum);
        break;
    case 2:
        sub = a - b;
        printf("The sub is %d\n", sub);
        break;
    case 3:
        multi = a * b;
        printf("The multiplication is %d\n", multi);
        break;
    case 4:
        div = a / b;
        printf("The division is %d\n", div);
        break;

    default:
        break;
    }
    return 0;
}