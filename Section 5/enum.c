# include <stdio.h>

int main(){

    enum gender{male,female};

    enum gender myGender = male;

    // Error
    // myGender = "44";


    return 0;
}