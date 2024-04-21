#include <stdio.h>
#include <string.h>
//(1)
struct student_info {
    int roll_number;
    char name[100];
    int age;
    char address[100];
    float marks;
};

//(2)
 int fun_student_info(struct student_info s[15]) {

    int number=0;

    for (int i = 0; i < 15; i++) {
        printf("\n roll number for student %d: ", s[i].roll_number);

        printf("\n name for student : ", s[i].name);

        printf("\n age for student : ", s[i].age);

        printf("\n address for student : ", s[i].address);

        printf("\n marks for student : ", s[i].marks);

        if(s[i].marks<12){
            number++;
        }

    }

    return number;

}
//(3)

struct date{
int day;
int month;
int year;


};

//(4)
struct info {
    char name[100];
    int age;
};

//(5)
struct test {
    int id;
    char name[100];
    char class_id;



};

int main() {
    //(1)
    /*struct student_info s[15];
    for (int i = 0; i < 15; i++) {
        printf("\nenter roll number for student %d: ", i+1);
        scanf("%d", &s[i].roll_number);


        printf("\nenter name for student %d: ", i+1);
        scanf("%s", &s[i].name);


        printf("\nenter age for student %d: ", i+1);
        scanf("%d", &s[i].age);


        printf("\nenter address for student %d: ", i+1);
        scanf("%s", &s[i].address);


        printf("\nenter marks for student %d: ", i+1);
        scanf("%f", &s[i].marks);
    }

    for (int i = 0; i < 15; i++) {
        printf("\n roll number for student %d: ", s[i].roll_number);

        printf("\n name for student : ", s[i].name);

        printf("\n age for student : ", s[i].age);

        printf("\n address for student : ", s[i].address);

        printf("\n marks for student : ", s[i].marks);

        }
        */

    //(2)

    /*struct student_info s[15];
    for (int i = 0; i < 15; i++) {
        printf("\nenter roll number for student %d: ", i+1);
        scanf("%d", &s[i].roll_number);


        printf("\nenter name for student %d: ", i+1);
        scanf("%s", &s[i].name);


        printf("\nenter age for student %d: ", i+1);
        scanf("%d", &s[i].age);


        printf("\nenter address for student %d: ", i+1);
        scanf("%s", &s[i].address);


        printf("\nenter marks for student %d: ", i+1);
        scanf("%f", &s[i].marks);
    }

  int num=fun_student_info(s);
   printf("\nnumber of students with marks less than 12: %d\n", num);*/


   //(3)
   /*struct date D[2];
   printf("enter day for the first date : ");
   scanf("%d",&D[1].day);

   printf("enter month for the  first date : ");
   scanf("%d",&D[1].month);

   printf("enter year for the first date : ");
   scanf("%d",&D[1].year);

   printf("\n first date : %d/%d/%d ",D[1].day,D[1].month,D[1].year);



   printf("enter day for the second date : ");
   scanf("%d",&D[2].day);

   printf("enter month for the  second date : ");
   scanf("%d",&D[2].month);

   printf("enter year for the second date : ");
   scanf("%d",&D[2].year);

   printf("\n second date : %d/%d/%d ",D[2].day,D[2].month,D[2].year);

   if(D[1].day==D[2].day&&D[1].month==D[2].month&&D[1].year==D[2].year){

        printf("\n Dates are equal.");
   }else {
    printf("\n Dates are not equal.");
   }*/

   //(4)
   /*struct info p;
   printf("\nenter your name : ");
   scanf("%s",&p.name);

   printf("\nenter your age : ");
   scanf("%d",&p.age);

   struct info *ptr = &p;

   printf("\nname: %s", (*ptr).name);
   printf("\nage: %d", (*ptr).age);*/


   //(5)

    struct test t;

    printf("size of struct : %lu \n", sizeof(t));


   //i dont have change








    return 0;
}
