#include <stdio.h>

int main() {
    int a, b, c;
  
    scanf("%d %d %d", &a, &b, &c);
    printf("Lengths: [%d, %d, %d]\n",a,b,c);

    if (a + b > c && b + c > a && a + c > b) {
        if (a == b && b == c && a == c) {
              printf("Type: Equilateral\n");
              printf("All sides are of the same length.\n");
        } 
        else if (a == b || a == c || b == c) {
            printf("Type: Isosceles\n");
            printf("Exactly two sides are equal.\n");
        } 
        else{
            printf("Type: Scalene\n");
            printf("All sides are of different lengths.\n");
        }
    } 
    else {
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.\n");
    }

    return 0;
}
