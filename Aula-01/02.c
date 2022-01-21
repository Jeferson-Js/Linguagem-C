#include <stdio.h>

int main(void){
    int age = 30;
    if(age > 20){
        printf("This person is of legal age");
    }else{
        printf("This person is a minor!");
        return 0;
    }
}