#include <stdio.h>
int sum(int ,int);
int sum(int x,int y){
return x + y;
}

int main() {
    int a = 10;
int b= 20;
 int result=   sum(b, a);
 printf("Sum is %d\n",result);
 int a1= 50;
 int b2= 50;
 int result2= sum(a1, b2);
 printf("Sum is %d\n",result2);
 return 0;
}
            // return 0;
    