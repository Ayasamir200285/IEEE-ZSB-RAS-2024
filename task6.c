#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

//(6)
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function to add a new node to the linked list
void addNode(Node **head, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}


void deleteNode(Node **head, int data) {
    Node *current = *head;
    Node *previous = NULL;

    while (current != NULL && current->data != data) {
        previous = current;
        current = current->next;
    }

    if (current != NULL) {
        if (previous == NULL) {
            *head = current->next;
        } else {
            previous->next = current->next;
        }
        free(current);
    }
}


void printList(Node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    //(1)
    /*int *ptr;
    ptr=(int*)malloc(sizeof(int));
    *ptr=5;
    printf("%d\n",*ptr);

    int *ptr1;
    ptr1=calloc(1,sizeof(int));
    *ptr1=6;
    printf("%d\n",*ptr1);

    int *ptr2;
    ptr2=realloc(ptr,2*sizeof(int));
    printf("%d\n",*ptr2);*/



    //(2)

   /* int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation using malloc failed.\n");
    } else {
        *ptr = 5;
        printf("Memory allocated using malloc: %d\n", *ptr);
    }


    int *ptr1 = (int *)calloc(1, sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation using calloc failed.\n");
    } else {
        *ptr1 = 6;
        printf("Memory allocated using calloc: %d\n", *ptr1);
    }


    free(ptr);


    int *ptr3 = (int *)malloc(2 * sizeof(int));
    if (ptr3 == NULL) {
        printf("Memory allocation for the fourth space failed.\n");
    } else {
        *ptr3 = 15;
        *(ptr3 + 1) = 20;
        printf("Memory allocated for the fourth space: %d, %d\n", *ptr3, *(ptr3 + 1));
    }*/


    //(3)
    /*char name[100];
    int max_length, count[256] = {0};
    char most_repeated_char;
    int max_frequency = 0;

    printf("Enter the maximum length for the name: ");
    scanf("%d", &max_length);

    printf("Enter your name: ");
    scanf(" %[^\n]s", name);

    // Calculate the frequency of each character in the name
    for (int i = 0; i < strlen(name); i++) {
        count[name[i]]++;
        if (count[name[i]] > max_frequency) {
            max_frequency = count[name[i]];
            most_repeated_char = name[i];
        }
    }

    printf("Name entered: %s\n", name);
    printf("Most repeated character: %c\n", most_repeated_char);
    printf("Frequency of the most repeated character: %d\n", max_frequency);*/

    //(4)

   /* int input_time, hours, minutes, seconds;


    printf("Enter the time in format [hh:mm:ss]: ");
    scanf("%d:%d:%d", &hours, &minutes, &seconds);


    input_time = hours * 10000 + minutes * 100 + seconds;


    printf("Time stored in a single integer variable: %06d\n", input_time);
    printf("Time extracted from the variable: %02d:%02d:%02d\n", input_time / 10000, (input_time / 100) % 100, input_time % 100);*/

    //(5)

   /* char input[MAX_LENGTH];
    char unique[MAX_LENGTH];
    char stopCode[] = "!!";
    int stop = 0;

    while (!stop) {
        printf("Enter a string (or '!!' to stop): ");
        scanf("%s", input);

        if (strcmp(input, stopCode) == 0) {
            stop = 1;
            break;
        }

        int uniqueIndex = 0;
        int visited[256] = {0};

        printf("Unique characters in the input string: ");
        for (int i = 0; i < strlen(input); i++) {
            if (visited[input[i]] == 0) {
                visited[input[i]] = 1;
                unique[uniqueIndex++] = input[i];
                printf("%c", input[i]);
            }
        }
        unique[uniqueIndex] = '\0';
        printf("\n");
    }*/

    //6

    Node *head = NULL;

    while (1) {
        printf("Enter '+' to add a node, '-' to delete a node, 'p' to print the list, 'x' to exit: ");
        char command;
        scanf(" %c", &command);

        switch (command) {
            case '+':
                int data;
                printf("Enter the data for the new node: ");
                scanf("%d", &data);
                addNode(&head, data);
                break;
            case '-':
                int dataToDelete;
                printf("Enter the data of the node to delete: ");
                scanf("%d", &dataToDelete);
                deleteNode(&head, dataToDelete);
                break;
            case 'p':
                if (head == NULL) {
                    printf("List is empty.\n");
                } else {
                    printList(head);
                }
                break;
            case 'x':
                return 0;
            default:
                printf("Invalid command. Please try again.\n");
        }
    }














    return 0;

}
