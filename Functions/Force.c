#include <stdio.h>
float force(float);
float g = 9.8;
float force(float m){
    return m*g;
}
int main(){
    printf("Enter mass in kg: ");
    float mass;
    scanf("%f",&mass);
    float result = force(mass);
    printf("Force is %.2f Newtons\n",result);
    
}