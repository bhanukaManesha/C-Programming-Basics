#include <stdio.h>

int main(){

    double MINUTESINYEAR = 60*24*365;
    double MINUTESINDAY = 60*24;
    int minutes;

    double years;
    double days;

    printf("Enter the minutes : ");
    scanf("%i",&minutes);

    days = minutes / MINUTESINDAY;
    years = minutes/MINUTESINYEAR;


    printf("The number of days : %f\n The number of years : %f\n",days,years);

    return 0;
}