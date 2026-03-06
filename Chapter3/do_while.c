#include <stdio.h>

int main() {
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
for(int i=0;i<=n;i++)
{
    if(i%1==0 && i%n==0){
        printf("is a Prime number%d\n",n);
    }
}
        return 0;
}