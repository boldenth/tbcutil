#ifndef ___GUARD_SORT_H
#define ___GUARD_SORT_H

#include "global.h"

// void sort(array, sizeof(array) / sizeof(array[0]), sizeof(array[0]), compare_func);

void bubble_sort(void *array, size_t count, size_t type_size, int (*compare) (const void *x, const void *y));
void bucket_sort(void *array, size_t count, size_t type_size, int (*compare) (const void *x, const void *y));
void quick_sort(void *array, size_t count, size_t type_size, int (*compare) (const void *x, const void *y));
void merge_sort(void *array, size_t count, size_t type_size, int (*compare) (const void *x, const void *y));

#endif // ___GUARD_SORT_H
