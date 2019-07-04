#include <stdio.h>

int main(){
    int x = 10;

    int *pInt = &x;

    printf("Address of the x : %p\n", &x);
    printf("Address of the pointer : %p\n",(void*) &pInt);
    printf("Value of the pointer : %p\n", pInt);
    printf("Pointed to of the pointer : %d\n", *pInt);



    return 0;
}