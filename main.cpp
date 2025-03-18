#include <stdio.h>

int main() 
{
    char func;
    double num1, num2;
    int sum, difference, quotient, product;
    
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter the  (+, -, *, /): ");
    scanf("%c", &func);
    
    switch (func) 
    {
        case '+':
            sum = num1 + num2;
            printf("The sum is " + sum);
            break;
        case '-':
            difference = num1 - num2;
            printf("The difference is " + difference);
            break;
        case '*':
            product = num1 * num2;
            printf("The product is " + product);
            break;
        case '/':
            quotient = num1 / num2;
            printf("The quotient is " + quotient);
            break;
        default:
            printf("Invalid input. Please try again.");
            break;
    }
return 0;
 
}
