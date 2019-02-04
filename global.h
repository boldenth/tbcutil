#ifndef ___GUARD_GLOBAL_H
#define ___GUARD_GLOBAL_H

#include "types.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <stdarg.h>

// Useful defines
#define TRUE 1
#define FALSE 0

#define nullptr (void *)0

// Useful macros
#define DO_ONCE(expr) do {expr;} while(0)

#define SWAP(a, b) DO_ONCE(if (a != b) { a ^= b; b ^= a; a ^= b; })

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0])) // or ARRAY_COUNT

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) >= (b) ? (a) : (b))

#define LSB(x) ((x) ^ ((x) - 1) & (x)) // least significant bit

#define CLAMP(val, min, max) val < min ? min : (val > max ? max : val)

#endif // ___GUARD_GLOBAL_H
