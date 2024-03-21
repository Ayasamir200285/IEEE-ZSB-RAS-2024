#include <stdio.h>
#include <stdlib.h>
// assignment 1
//(3)
/*void frequency(int arr[], int size) {
    int freq[size];
    int find = -1;

    for (int k = 0; k < size; k++) {
        int count = 1;
        for (int j = k + 1; j < size; j++) {
            if (arr[k] == arr[j]) {
                count++;
                freq[j] = find;
            }
        }

        if (freq[k] != find) {
            freq[k] = count;
        }
    }

    printf("Element \t Frequency\n");
    for (int k = 0; k < size; k++) {
        if (freq[k] != find) {
            printf("%d \t %d\n", arr[k], freq[k]);
        }
    }
}*/

//(4)
/*void add(int n1,int n2,int *sum){
    *sum=n1+n2;


}*/


//assignment 4
//(4)

void stringCopy(char source[], char destination[]) {
    int i = 0;

    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';

int main()
{
    //assignment 1
    //(1)
    /*int i;
    int count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &i);
    int a[i];

    for(int h = 0; h < i; h++)
    {
        printf("Enter element %d: ", h);
        scanf("%d", &a[h]);
    }

    for(int h = 0; h < i; h++)
    {
        printf("%d \t", a[h]);
    }

    for(int x = 0; x < i; x++)
    {
        for(int y = x + 1; y < i; y++)
        {
            if(a[x] == a[y])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal count of duplicate elements: %d\n", count);*/


//(2)
     /*int i;
    int count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &i);

    int a[i];

    for (int h = 0; h < i; h++) {
        printf("Enter element %d: ", h);
        scanf("%d", &a[h]);
    }

    printf("Entered elements: ");
    for (int h = 0; h < i; h++) {
        printf("%d \t", a[h]);
    }

    // Count duplicate elements
    for (int x = 0; x < i; x++) {
        for (int y = x + 1; y < i; y++) {
            if (a[x] == a[y]) {
                count++;
                break;
            }
        }
    }

    printf("\nTotal count of duplicate elements: %d\n", count);

    // Find and print unique elements
    int unique[i - count];
    int uniqueIndex = 0;

    for (int w = 0; w < i; w++) {
        int isUnique = 1;

        for (int e = 0; e < i - count; e++) {
            if (w != e && a[w] == unique[e]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            unique[uniqueIndex] = a[w];
            uniqueIndex++;
        }
    }

    printf("Unique elements: ");
    for (int u = 0; u < i - count; u++) {
        printf("%d ", unique[u]);
    }*/


    //(3)
    /*int i;
    printf("Enter the number of elements: ");
    scanf("%d", &i);

    int a[i];

    for (int h = 0; h < i; h++) {
        printf("Enter element %d: ", h);
        scanf("%d", &a[h]);
    }

    printf("Entered elements: ");
    for (int h = 0; h < i; h++) {
        printf("%d \t", a[h]);
    }

    printf("\nArray elements and their frequencies:\n");
    frequency(a, i);*/



    //(4)
    /*int num1 ,num2, sum;
    printf(" enter first number:");
    scanf("%d",&num1);
    printf("\n enter second number:");
    scanf("%d",&num2);
    add(num1,num2,&sum);
    printf("\n %d+%d=%d",num1,num2,sum);*/


    //assignment 2

    //(1)
    /*int  x=1,y=2,z=3;
    int *p,*q,*r;

    p=&x;
    q=&y;
    r=&z;
     printf("Values: \n");
    printf("x: %d\ny: %d\nz: %d\np: %p\nq: %p\nr: %p\n", x, y, z, (void *)p, (void *)q, (void *)r);

    printf("\nSwapping pointers:\n*q.*r\n");
    printf("%d\n", *q * *r);

    printf("\nExecuting the swap code: r = p; p = q; q = r;\n");
    int *temp = r;
    r = p;
    p = q;
    q = temp;

    printf("\nValues after swapping: \n");
    printf("x: %d\ny: %d\nz: %d\np: %p\nq: %p\nr: %p\n*p: %d\n*q: %d\n*r: %d\n", x, y, z, (void *)p, (void *)q, (void *)r, *p, *q, *r);*/



    //assignment 3
    //(1)
      /*int i;
    printf("Enter string length: ");
    scanf("%d", &i);
    getchar();
    char str[i+1];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("You entered: %s", str);*/

    //(2)
    /*int i;
    printf("Enter string length: ");
    scanf("%d", &i);
    getchar();
    char str[i+1];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("You entered: %s", str);

    int x = 0;

    printf("Individual characters in the string:\n");
    while (str[x] != '\0') {
        if (str[x] != ' ' && str[x] != '\n') {
            printf("%c\n", str[x]);
        }
        x++;
    }*/

    //(3)
      /*char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (compareStrings(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }*/

    //(4)
     char source[100], destination[100];

    printf("Enter a string to copy: ");
    scanf("%s", source);

    stringCopy(source, destination);

    printf("Original string: %s\n", source);
    printf("Copied string: %s\n", destination);








    return 0;
}
