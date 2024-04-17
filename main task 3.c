#include <stdio.h>
//(2)
#define ADD(x, y) ((x) + (y))
#define SUB(x, y) ((x) - (y))
#define MUL(x, y) ((x) * (y))
#define DIV(x, y) ((y) == 0 ? 0 : (x) / (y))

#define CALCULATE(op, x, y) \
    do { \
        switch(op) { \
            case 1: \
                printf("Result: %d\n", ADD(x, y)); \
                break; \
            case 2: \
                printf("Result: %d\n", SUB(x, y)); \
                break; \
            case 3: \
                printf("Result: %d\n", MUL(x, y)); \
                break; \
            case 4: \
                printf("Result: %.2f\n", DIV(x, y)); \
                break; \
            default: \
                printf("Invalid choice.\n"); \
        } \
    } while(0)


//(1)

/*float (*operation)(float, float);

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero.\n");
        return 0;
    }
    return a / b;
}*/



int main()


{

//(1)
    /*float num1, num2;
    int choice;
    printf("enter the first number: ");
    scanf("%f", &num1);
    printf("enter the second number: ");
    scanf("%f", &num2);


    while (1) {
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }


        switch (choice) {
            case 1:
                operation = add;
                break;
            case 2:
                operation = sub;
                break;
            case 3:
                operation = mul;
                break;
            case 4:
                operation = div;
                break;
            default:
                printf("Invalid choice.\n");
                continue;
        }

        printf("Result: %.2f\n", (*operation)(num1, num2));
    }*/


    //(2)

  /* int num1, num2;
    int choice;

    while (1) {
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        CALCULATE(choice, num1, num2);
    }*/


    //(3)

    /*if, else statements are evaluated at runtime based on the values of variables and expressions,
    and the corresponding code blocks are executed accordingly.
On the other hand, conditional compilation directives like #ifdef, #else, #endif
 are evaluated at compile-time based on the presence or absence of certain preprocessor symbols,
 and the corresponding code blocks are included or excluded from the compilation process.
*/

    return 0;
}
