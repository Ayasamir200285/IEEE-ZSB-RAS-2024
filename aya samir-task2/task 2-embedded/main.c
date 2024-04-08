#include <stdio.h>
void increment(int *value){
    (*value++);
}
int main(void)

{
     //(1)


    /*int *p1;
    char *p2 ;
    long long *p3;
    printf("p1:%d\n",p1);
    printf("p2:%c\n",p2);
    printf("p3:%lld\n",p3);

    p1++;
    printf("p1:%d\n",p1);
    printf("the output increase 4 byt because it integer");

    p2++;
    printf("p2:%c\n",p2);
    printf("the output increase letter because it char");

    p3++;
    printf("p3:%lld\n",p3);
    printf("the output increase because it long number");*/

    //(2)
     /*int x=0x00FFAA;
     int *ptr=&x;

     printf("prt:%d\n",ptr);

     *ptr++;
      printf("prt:%d\n",ptr);
      printf("prints the value of the integer variable at the address stored in ptr, which is 0x00ffaa, and then ptr is incremented to point to the next integer variable\n");


      *++ptr;
      printf("prt:%d\n",ptr);
      printf("prints the value of the integer variable at the address that ptr is incremented to, which is 0x00ffac, and then the value of the integer variable at the original address is incremented\n");


     ++*ptr;
      printf("prt:%d\n",ptr);
      printf("prints the value of the integer variable at the original address, which is 0x00ffad, after incrementing its value by 1\n");*/

     //(3)

    /*int num = 5;
    void (*func_ptr)(int *);
    func_ptr = &increment;

    func_ptr(&num);

    printf("Incremented value: %d\n", num);*/

    //(4)


    int values[] = {10, 20, 30, 40, 50};
    int *ptr = values;

    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }



    return 0;
}
