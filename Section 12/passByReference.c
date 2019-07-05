#include <stdio.h>

void square(int * value);

int main(){

    int num = 4;
    square(&num);
    printf("%i\n",num);
    return 0;
}


void square(int * value){
    *value = *value * *value;
}