#ifndef ___GUARD_STRINGS_H
#define ___GUARD_STRINGS_H

#include "global.h"

#include <stdarg.h>

typedef char *string;

string  string_dup(const string);
string  string_copy(const string);
string  string_trim(string);
string  string_replace(string, const string, const string);
string *string_split(string, const char *);
size_t  string_arrsize(string *);
void    string_concat(string *, size_t, ...);// TODO: improve?
void    string_toupper(string);
void    string_tolower(string);

#endif // ___GUARD_STRINGS_H
