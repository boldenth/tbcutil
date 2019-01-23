#ifndef ___GUARD_STRINGS_H
#define ___GUARD_STRINGS_H

#include "global.h"

#include <stdarg.h>

typedef char *string;

string  string_dup(const string);
string  string_copy(const string);
string  string_trim(string);
string  string_replace(string, const string, const string);// this'll be annoying
string *string_split(string, const char *);
size_t  string_arrsize(string *);
string  string_concat(size_t, ...);// extend to concat strings in array
void    string_toupper(string);
void    string_tolower(string);
void    string_free(string);
void    string_freearr(string *);
int     string_compare(const string, const string);

#endif // ___GUARD_STRINGS_H
