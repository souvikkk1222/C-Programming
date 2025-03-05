#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
      int year;
    scanf("%d",&year);
    if(year > 0){
       if((year%4==0 && year%100!=0) || (year%400==0)){
       
            printf("Yes, %d is a leap year.\n",year);  
       } 
        else{
            printf("No, %d is not a leap year.\n",year);
        }
    }
    else {
        printf("The given year %d is Invalid year.",year);
    }
    return 0;
}
