#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main(){

    float rainfall[YEARS][MONTHS] = 
     {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    int year,month;
    float totalMonth,totalYear;


    printf("YEAR\t\tRAINFALL (inches)\n");
    for (year = 0, totalYear = 0; year < YEARS ; year++){
        for (month = 0,totalMonth = 0; month < MONTHS; month++){
            totalMonth += rainfall[year][month];
        }

        printf("%5d \t%15.1f\n",2010 + year,totalMonth);
        totalYear += totalMonth;
    }

    printf("\nThe yearly average is %.1f inches. \n\n",totalYear/YEARS);

    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, totalMonth = 0; year < YEARS; year++)
            totalMonth += rainfall[year][month];

        printf("%4.1f ", totalMonth/YEARS);
    }

    printf("\n");

    return 0;
}