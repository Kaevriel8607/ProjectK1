#include <stdio.h>
#include <math.h>

int main(){

    float result;
    float num1;
    float num2;
    char olay;

    printf("\nfirst number: ");
    scanf("%f", &num1);

    printf("\noparetor: ");
    scanf(" %c", &olay);

    printf("\nsecond number: ");
    scanf("%f", &num2);

    

    switch(olay){
        case '+':
            result = num1 + num2;
            printf("\nresult: %2.f", result);
            break;
        case '-':
            result = num1 - num2; 
            printf("\nresult: %2.f", result);
            break;
        case '/':
            result = num1 / num2;
            printf("\nresult: %2.f", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nresult: %2.f", result);
            break;
        default :
            printf("\nvalid operators please, ");
    }



    return 0;
}