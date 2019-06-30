#include <stdio.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST 0.25
#define OVERTIME 40

int main(){

    int noOfHours;

    double overtimePayRate = 12 * 1.5;

    double totalPay;
    double tax;
    double netPay;

    printf("Enter the number of hours of work : ");
    scanf("%d",&noOfHours);


    if (noOfHours > OVERTIME) {
        int remHours = noOfHours - OVERTIME;
        totalPay = OVERTIME * PAYRATE + remHours * overtimePayRate;

    } else {
        totalPay = noOfHours * PAYRATE;
    }

    if (totalPay <= 300){
        tax = totalPay * TAXRATE_300;
    } else if (totalPay <= 450){
        tax += 300 * TAXRATE_300;
        tax += (totalPay - 300) * TAXRATE_150;
    } else {
        tax += 300 * TAXRATE_300;
        tax += 150 * TAXRATE_150;
        tax += (totalPay - 450) * TAXRATE_REST;
    }


    netPay = totalPay - tax;

    printf("Gross Pay : %f\nTaxes : %f\nNet Pay : %f\n",totalPay,tax,netPay);

    return 0;
}