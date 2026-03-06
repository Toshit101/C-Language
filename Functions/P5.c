#include <stdio.h>
float c2f(float);
float c2f(float c){
    return (c*9/5)+32;
}

int main() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = c2f(celsius);
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

        return 0;
}