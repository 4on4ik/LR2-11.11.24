#include <stdio.h>

int main(void){
    float num1, num2, result;
    char operator;

    printf("Write first and second numbers:\n");
    scanf("%f %f", &num1, &num2);

    printf("Write operation(+, -, *, /):\n");
    scanf("%s", &operator);


    switch(operator){
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;
        
        default:
            printf("Wrong operation\n");
            return 1;
        
    }
    printf("Result: %f\n", result);

    return 0;
}
