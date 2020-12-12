#include "dynarr.h"

// the subroutine to create a dynamic array
dynarr* dynarr_create() {
    // create a new array
    dynarr *new_arr = (dynarr*)malloc(sizeof(struct __dynarr));
    // new array of capacity 0
    new_arr->contents = NULL;
    new_arr->capacity = new_arr->length = 0;
    return new_arr;
}

dynarr* dynarr_insert(dynarr* arr, int ele) {
    // if arr does not exist, create it here itself
    if (arr == NULL) {
        arr = dynarr_create();
    }
    // if the capacity = 0, create an int array
    if (arr->capacity == 0 || arr->contents == NULL) {
        // create an array of capacity 1
        arr->contents = (int*)malloc(sizeof(int));
        arr->length = arr->capacity = 1;
        *(arr->contents) = ele;
    } else {
        if (arr->length == arr->capacity) {
            arr->capacity = arr->capacity * 2;
            int* new_arr = (int*)malloc(sizeof(int) * arr->capacity);
            memcpy(new_arr, arr->contents, sizeof(int) * arr->length);
            new_arr[arr->length++] = ele;
            free(arr->contents);
            arr->contents = new_arr;
        } else {
            arr->contents[arr->length++] = ele;
        }
    }
    return arr;
}

int* dynarr_getarr(dynarr* arr) {
    if (arr == NULL) {
        return NULL;
    }
    return arr->contents;
}

size_t dynarr_getlength(dynarr* arr) {
    if (arr == NULL) {
        return 0;
    }
    return arr->length;
}

size_t dynarr_getcapacity(dynarr* arr) {
    if (arr == NULL) {
        return 0;
    }
    return arr->capacity;
}
