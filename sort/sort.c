// sort.c

#include "sort.h"

// recursive bubble sort
void bubble_sort(void *array, size_t count, size_t type_size, int (*compare) (const void *x, const void *y)) {
    if (count < 2) return;

    char *const first_ptr = &array[0];
    void *temp = malloc(type_size);

    for (size_t offset = 1; offset < count; offset++) {
        if (compare(first_ptr + offset * type_size, first_ptr) < 0) {
            memcpy(temp, first_ptr + offset * type_size, type_size);
            memcpy(first_ptr + offset * type_size, first_ptr, type_size);
            memcpy(first_ptr, temp, type_size);
        }
    }

    free(temp);
    bubble_sort(first_ptr + type_size, count - 1, type_size, compare);
}

void quick_sort(void *array, size_t count, size_t type_size, int (*compare) (const void *x, const void *y)) {
    // TODO
    if (count < 2) return;

    size_t mid = 0;
}


int int_ascending(const void *x, const void *y) {
    return *(int *)x - *(int *)y;
}

int int_descending(const void *x, const void*y) {
    return *(int *)y - *(int *)x;
}

int main(void) {
    int arr[5] = {5, 2, 4, 1, 3};

    bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), int_descending);

    for (int i = 0; i < 5; i++) {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

