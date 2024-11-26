#include<stdio.h>

int main(){
    int age ;
    printf("enter your age");
    scanf("%d", &age);
    printf("age is : %d\n", age);


    //print sum of three number
    int a,b,c;
    printf("enter a:");
    scanf("%d", &a);

    printf("enter b:");
    scanf("%d", &b);

    printf("enter c:");
    scanf("%d", &c);

    printf("sum of three numbers: %d", a+b+c);

    return 0; 

}