#include "stdio.h"

int main() {
    int size = 0;
    int i = 0;
    int j = 0;
    int s = 0;
    printf("enter size:\n ");
    scanf("%d", &size);

    for (i = 0; i < size; i++) {
        for (s = size; s > i; s--) {
            printf(" ");
        }
        for (j = 0; j < i * 2 - 1; j++) {
            printf("*");
        }
        for (s = size; s > i; s--) {
            printf(" ");
        }
        for (s = size; s > i; s--) {
            printf(" ");
        }
        for (j = 0; j < i * 2 - 1; j++) {
            printf("*");
        }

        printf("\n");
    }


    return 0;
}