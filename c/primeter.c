#include<stdio.h>

int main(){
    //perimeter of rectangle

    float breadth;
    float length;
    printf("enter your breadth:");
    scanf("%f", &breadth);
    printf("enter your length:");
    scanf("%f", &length);

    float perimeter = length * breadth;
    printf(" perimeter is : %f", perimeter);
    return 0;


}