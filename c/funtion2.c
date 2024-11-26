#include <stdio.h>

void namaste();
void bhonjur();

void namaste(){
    printf("Namaste\n");
}

void bhonjur(){
    printf("Bhonjur\n");
}

int main(){
    char ch ;
    printf("french for f & indian for i:");
    scanf("%c", &ch);

    if(ch=='i'){
        namaste();
    }else{
        bhonjur();
    }
    return 0;

}

