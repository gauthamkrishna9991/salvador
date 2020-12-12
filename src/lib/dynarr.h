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

dynarr* dynarr_create();

dynarr* dynarr_insert(dynarr* arr, int element);

int *dynarr_getarr(dynarr* arr);

size_t dynarr_getlength(dynarr *arr);

size_t dynarr_getcapacity(dynarr *arr);

#endif