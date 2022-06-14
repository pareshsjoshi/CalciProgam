#include <stdio.h>

int main4() {

    char op;
    double first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf_s("%c", &op);
    printf("Enter two operands: ");
    scanf_s("%lf %lf", &first, &second);
    //Commenting
    switch (op) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
