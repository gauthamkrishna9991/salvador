#pragma once

#ifndef DYNARR_H
#define DYNARR_H

#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

typedef struct __dynarr {
    int* contents;
    size_t length;
    size_t capacity;
} dynarr;

// create a dynamic array
dynarr* dynarr_create();

// insert an element of type integer to the dynamic array
dynarr* dynarr_insert(dynarr* arr, int element);

// give them the pointer to dynamic array
int *dynarr_getarr(dynarr* arr);

// get the length of the dynamic array
size_t dynarr_getlength(dynarr *arr);

// get the capacity (allocated size, NOT length) of the dynamic array
size_t dynarr_getcapacity(dynarr *arr);

#endif