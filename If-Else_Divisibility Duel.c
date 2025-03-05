#include <stdio.h>

int main() {
    int X, Y, Z;
    
    scanf("%d %d %d", &X, &Y, &Z);

    if (X % Y == 0) {
        if (X % Z == 0) {
            printf("X defeats all");
        } else {
            printf("Y triumphs over X!");
        }
    } 
    else if (X % Z == 0) {
        printf("Z outsmarts X!");
    } 
    else {
        printf("X remains undefeated!");
    }

    return 0;
}
