#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr1[10];
    arr1[0] = 0;

    int i;
    srand(time(NULL));
    for(i = 1; i < 10; i++) {
        arr1[i] = rand();
    }

    printf("[ ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("]\n");

    int arr2[10];
    int *p1 = arr1;
    int *p2 = arr2;

    arr2[9] = 0;

    p1 += 9;

    while(*p1) {
        *p2 = *p1;
        p1--;
        p2++;
    }

    printf("[ ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("]\n");

    return 0;
}