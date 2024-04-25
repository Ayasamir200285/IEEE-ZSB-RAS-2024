#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//(1)
/*struct student_info {
    unsigned int roll_number : 4;
    unsigned int age : 8;
    unsigned int marks : 3;
    char address[100]; // Assuming a maximum of 100 characters for address
    char name[100]; // Assuming a maximum of 100 characters for name
};

void print_info(struct student_info s[]) {
    for (int i = 0; i < 15; i++) {
        printf("student %d:\n", i + 1);
        printf("roll number: %d\n", s[i].roll_number);
        printf("age: %d\n", s[i].age);
        printf("marks: %d\n", s[i].marks);
        printf("address: %s\n", s[i].address);
        printf("name: %s\n", s[i].name);
        printf("\n");
    }
}*/


//(2)

/*typedef struct {
    int real1, real2;
    int imaginary1, imaginary2;
    int result1, result2;
} C;

void addC(C *a) {
    a->result1 = a->real1 + a->real2;
    a->result2 = a->imaginary1 + a->imaginary2;

    printf("Enter real1: ");
    scanf("%d", &a->real1);
    printf("\nEnter real2: ");
    scanf("%d", &a->real2);
    printf("Enter imaginary1: ");
    scanf("%d", &a->imaginary1);
    printf("\nEnter imaginary2: ");
    scanf("%d", &a->imaginary2);

    printf("result1=%d\n", a->result1);
    printf("result2=%d\n", a->result2);

}*/

//(3)

/*typedef int INTEGER;

typedef float FLOAT;

typedef double DOUBLE;

typedef char CHAR;*/

//(4)
/*enum Operations {
    ADD = '+',
    SUBTRACT = '-',
    MULTIPLY = '*',
    DIVIDE = '/',
    BITWISE_AND = '&',
    BITWISE_OR = '|',
    LOGICAL_NOT = '!'
};*/

//(6)
/*#define SORT_ASCENDING


#define ARRAY_SIZE 5

int* get_user_input(int *arr) {
    printf("Enter %d integers:\n", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    return arr;
}

void sort_array(int *arr) {
    #ifdef SORT_ASCENDING
    // Sort in ascending order
    for (int i = 0; i < ARRAY_SIZE - 1; i++) {
        for (int j = 0; j < ARRAY_SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    #elif defined(SORT_DESCENDING)

    for (int i = 0; i < ARRAY_SIZE - 1; i++) {
        for (int j = 0; j < ARRAY_SIZE - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    #endif
}*/


//(7)
#define ADD_OPERATION 1
#define SUBTRACT_OPERATION 2

#define OPERATION ADD_OPERATION

#define ADD(x, y) (x + y)
#define SUBTRACT(x, y) (x - y)

int main() {
    //(1)
    /*struct student_info s[15];
    printf("Size of struct student_info: %lu bytes\n", sizeof(struct student_info));

    print_info(s);*/


    //(2)
     /*C a = {0, 0, 0, 0, 0, 0};

    addC(&a);*/

    //(3)

    /*printf("Size of INTEGER: %lu bytes\n", sizeof(INTEGER));

    printf("Size of FLOAT: %lu bytes\n", sizeof(FLOAT));

    printf("Size of DOUBLE: %lu bytes\n", sizeof(DOUBLE));

    printf("Size of CHAR: %lu bytes\n", sizeof(CHAR));*/

    //(4)
   /*int operand1, operand2;
    char operation;
    int result;


    printf("Enter operand1: ");
    scanf("%d", &operand1);
    printf("Enter operand2: ");
    scanf("%d", &operand2);
    printf("Enter operation (+, -, *, /, &, |, !): ");
    scanf(" %c", &operation);


    switch (operation) {
        case ADD:
            result = operand1 + operand2;
            break;
        case SUBTRACT:
            result = operand1 - operand2;
            break;
        case MULTIPLY:
            result = operand1 * operand2;
            break;
        case DIVIDE:
            result = operand1 / operand2;
            break;
        case BITWISE_AND:
            result = operand1 & operand2;
            break;
        case BITWISE_OR:
            result = operand1 | operand2;
            break;
        case LOGICAL_NOT:
            result = !operand1;
            break;
        default:
            printf("Invalid operation!\n");
            return 1;
    }


    printf("Result: %d\n", result);*/

    //(5)

    //(6)
     /*int arr[ARRAY_SIZE];
    get_user_input(arr);

    sort_array(arr);

    printf("Sorted array: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");*/


    //(7)
    /*int num1, num2;
    int result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    switch (OPERATION) {
        case ADD_OPERATION:
            result = ADD(num1, num2);
            printf("Result of addition: %d\n", result);
            break;
        case SUBTRACT_OPERATION:
            result = SUBTRACT(num1, num2);
            printf("Result of subtraction: %d\n", result);
            break;
        default:
            printf("Invalid operation!\n");
            break;
    }*/







    return 0;
}
