#include <stdio.h>
#include <stdbool.h>

int main(){

    int primeNumbers[100] = {2,3};
    int primeIndex = 2;

    bool isPrime;

    printf("tes");

    for (int i = 5; i < 100; i=i+2 ){

        isPrime = true;

        for (int j=1; isPrime && i/primeNumbers[j] >= primeNumbers[j]; ++j){
            if (i%primeNumbers[j] == 0){
                isPrime = false;
            }
        }
        if (isPrime==true){
            primeNumbers[primeIndex] = i;
            ++primeIndex;
        }

    }


    for (int i = 1; i < primeIndex; ++i ){
        printf("%i\n",primeNumbers[i]);
    }

    return 0;
}