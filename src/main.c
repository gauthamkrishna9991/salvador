#include <stdio.h>
#include "lib/dynarr.h"

int main(
    // int     argc,
    // char  **argv
) {
    dynarr* arr = dynarr_create();
    arr = dynarr_insert(arr, 1);
    arr = dynarr_insert(arr, 4);
    arr = dynarr_insert(arr, 6);
    arr = dynarr_insert(arr, 7);
    int* a = dynarr_getarr(arr);
    for(size_t i = 0; i < dynarr_getlength(arr); i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return (0);
}
