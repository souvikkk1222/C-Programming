  
    #include <stdio.h>

int main() {
      int a,b,c;
      scanf("%d %d %d", &a ,&b ,&c);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    if(a>b)
    {
        if(a>c)
        {
            printf("The largest number is : %d",a);
        }
        else
        {
            printf("The largest number is : %d",c);
        }
    }
    else if(b>c)
    {
        printf("The largest number is : %d",b);
    }
    else
    {
        printf("The largest number is : %d" ,c);
    }
  return 0;
    
}
