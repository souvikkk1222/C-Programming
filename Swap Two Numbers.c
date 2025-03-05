#include <stdio.h>

int main() {

    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
        int a,b,temp;
      scanf("%d",&a);
    scanf("%d",&b);
        temp = a;
        a=b;
        b=temp;
  
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    
    
    return 0;
}
