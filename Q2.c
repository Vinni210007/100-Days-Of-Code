#include <stdio.h>
int main(){
    float a, b;
    printf("Enter 2 nymbers:");
    scanf("%f %f", &a, &b);
    printf(("sum = %.2f\n",a+b));
    printf("difference = %.2f\n",a-b);
    printf("product = %.2f\n",a*b);
    if (b!=0){
        printf("quotient = %.2f\n",a/b);
    }
    else{
        printf("quotient = not possible(division by zero)\n");
    }
    return 0;
}