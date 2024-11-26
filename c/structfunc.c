#include<stdio.h>

struct student {
    int roll; 
    int name ;
    int cgpa;
};

void printInfo(struct student s1);
  int main(){
    struct student s1 = {36,"name",9.3};
    printInfo(s1);

    return 0;

  }
  void printInfo(struct student s1){

    printf("student info : \n");
    printf("student.roll = %d\n", s1.roll);
  }