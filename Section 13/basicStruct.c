#include <stdio.h>


struct employee {
    char name[50];
    int hireDate;
    float salary;

};

int main(){

    struct employee bhanuka = {"bhanuka", 25,470.00};

    struct employee other = {};

    printf("Name of employee : ");
    scanf("%s",other.name);

    printf("Hired Date : ");
    scanf("%i",&other.hireDate);
    

    printf("Salary: ");
    scanf("%f",&other.salary);

    printf("\n\nName : %s\nHire Date : %i\nSalary: %f\n",bhanuka.name, bhanuka.hireDate, bhanuka.salary);
    printf("Name : %s\nHire Date : %i\nSalary: %f\n",other.name, other.hireDate, other.salary);

    
    return 0;
}