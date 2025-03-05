

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N > 15 && N % 3 == 0 && N % 7 == 0 && N % 2 == 0) 
        printf("The verdict for the number %d is: SUPERNATURAL", N);
    else if (N > 10 && N % 2 == 0)  // Removed N % 7 == 0 check
        printf("The verdict for the number %d is: MIRACULOUS", N);
    else if (N > 10)
        printf("The verdict for the number %d is: MAGICAL", N);
    else if (N < 10 && N % 2 == 0)
        printf("The verdict for the number %d is: NORMAL", N);
    else 
        printf("The verdict for the number %d is: INVALID", N);

    return 0;
}
