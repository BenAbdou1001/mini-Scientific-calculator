#include <stdio.h>

#define PI 3.14159265

int main() {
   printf(" _______________________\n");
    printf("|     _______________     |\n");
    printf("|    |               |    |\n");
    printf("|    |  1    2    3  |    |\n");
    printf("|    |               |    |\n");
    printf("|    |  4    5    6  |    |\n");
    printf("|    |               |    |\n");
    printf("|    |  7    8    9  |    |\n");
    printf("|    |______________ |    |\n");
    printf("|    |     +    -    |    |\n");
    printf("|    |               |    |\n");
    printf("|    |     *    /    |    |\n");
    printf("|    |               |    |\n");
    printf("|    | sin  tan  cos |    |\n");
    printf("|    |_______________|    |\n");
    printf("|_________________________|\n\n");
    
    char op;
    double num1, num2, result = 0.0;

    printf("Enter an operator (+, -, *, /, ^, s, c, t): ");
    scanf("%c", &op);

    if (op == 's' || op == 'c' || op == 't') {
        printf("Enter a number: ");
        scanf("%lf", &num1);
    } else {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
    }

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Division by zero!");
                break;
            }
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
            break;
        case '^':
            result = 1;
            for (int i = 0; i < num2; i++) {
                result *= num1;
            }
            printf("%.2lf ^ %.2lf = %.2lf", num1, num2, result);
            break;
        case 's':
            num1 *= PI / 180.0;
            result = num1;
            for (int i = 1; i <= 15; i += 2) {
                double term = num1;
                for (int j = 1; j <= i; j++) {
                    term *= -(num1 * num1) / ((2 * j) * (2 * j + 1));
                }
                result += term;
            }
            printf("sin(%.2lf) = %.2lf", num1 * 180.0 / PI, result);
            break;
        case 'c':
            num1 *= PI / 180.0;
            result = 1.0;
            for (int i = 1; i <= 14; i += 2) {
                double term = 1.0;
                for (int j = 1; j <= i; j++) {
                    term *= -(num1 * num1) / ((2 * j) * (2 * j - 1));
                }
                result += term;
            }
            printf("cos(%.2lf) = %.2lf", num1 * 180.0 / PI, result);
            break;
        case 't':
            num1 *= PI / 180.0;
            result = num1;
            double n2 = num1 * num1;
            double n3 = n2 * num1;
            double n5 = n3 * n2;
            double n7 = n5 * n2;
            double n9 = n7 * n2;
            double n11 = n9 * n2;
            double n13 = n11 * n2;
            double n15 = n13 * n2;
            double n17 = n15 * n2 ;
        num1;
    result += n3 / 3;
    result += n5 / 5;
    result += n7 / 7;
    result += n9 / 9;
    result += n11 / 11;
    result += n13 / 13;
    result += n15 / 15;return 0;

    result += n17 / 17;
  printf("tan(%.2lf) = %.2lf", num1 * 180.0 / PI, result);
  break;
  default:
  printf("Invalid operator!");
  break;
  }
  return 0;
}

