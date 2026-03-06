#include <stdio.h>
float avg(float,float,float);
int main() {
    float a,b,c;
    printf("Enter three numbers: ");
    scanf("%f %f %f",&a,&b,&c);
    float result = avg(a,b,c);
    printf("The average is %.2f\n",result);

        return 0;
}
float avg(float a,float b,float c){
    return (a+b+c)/3;
}