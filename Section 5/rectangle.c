/*
    Author  : Bhanuka Gamage
    Purpose : Calculate the perimeter and area
 */


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
    double width = atoi(argv[1]);
    double height = atoi(argv[2]);
    double perimeter;
    double area;


    perimeter = 2 * width + 2 * height;
    area = width * height;

    printf("The primeter is %.5f\nThe area is %.8f\n", perimeter, area);

    return 0;


}