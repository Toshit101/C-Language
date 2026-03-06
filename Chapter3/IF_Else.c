#include <stdio.h>

int main() {
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
if(age>28){
printf("You can Vote & can drive");
}
else if(age>18){
    printf("You can vote and cannot drive");
}
else{
    printf("You cannot vote and cannot drive");
        
}
return 0;
}