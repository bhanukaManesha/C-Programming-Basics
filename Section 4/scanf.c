// Reading Inputs from the Terminal
 
 # include <stdio.h>

 int main()
 {
     char str[100];
     int i;

    //  double x;

     printf("Enter a value : ");

     scanf("%s %d", str, &i);

    // Used for reading in double
    //  scanf("%lf", &x);

     printf("\n You entered : %d:::%s\n", i, str);

 }
