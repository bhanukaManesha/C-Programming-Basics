#include <stdio.h>

int main(){
    enum Company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("The enum for xerox is %i\n",xerox);
    printf("The enum for google is %i\n",google);
    printf("The enum for ebay is %i\n",ebay);

}