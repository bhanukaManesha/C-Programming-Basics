#include <stdio.h>

int lengthString(const char *string);

int main(){

    
    printf("%d \n", lengthString("stringLength test"));
    printf("%d \n", lengthString(""));
    printf("%d \n", lengthString("bhanuka"));

    return 0;
}

int lengthString(const char *ptr){

    const char *lastAddress = ptr;

    while (*lastAddress){
        ++lastAddress;
    }

    return lastAddress - ptr;


}