#include<stdio.h>

//user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
//     struct student s1;
//     s1.roll = 234;
//     s1.cgpa = 8.6f;
//    // s1.name= "nikita";
//    strcpy(s1.name,"Nikita");

    struct student s1 ={234,8.6,"nikita"};
    printf("student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa =%f\n", s1.cgpa);
      
      //by pointers
    struct student *ptr = &s1;
    printf("student roll = %d\n",(*ptr).roll);

    //Arrow operator
    printf("student->roll = %d\n", ptr->roll);
    printf("student->name = %s\n", ptr->name);

    return 0;
}