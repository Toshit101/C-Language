#include <stdio.h>
int sub(int,int);
int main(){
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    int result = sub(a,b);
    printf("The subtraction is %d\n",result);
}
int sub(int a,int b){
    return a-b;
}