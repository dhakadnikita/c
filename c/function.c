#include <stdio.h>

void printHello();// declaration
void printGoodbye();

int main(){
    printHello(); // calling
    printGoodbye();
    return 0;

}

void printHello(){  //defination
    printf("Hello\n");
    
}

void printGoodbye(){
    printf("Goodbye\n");
}

