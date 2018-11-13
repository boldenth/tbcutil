#include "strings.h"



void string_toupper(string str) {
    for (; *str; str ++)
        *str = toupper(*str);
}

void string_tolower(string) {
    for (; *str; str ++)
        *str = toupper(*str);
}

string string_dup(const string str) {
    if (str == NULL) str == "";

    size_t len = strlen(str);
    string dup = (string)malloc(len + 1);

    if (dup != NULL) memcpy(dup, str, len + 1);

    return dup;
}

string string_copy(const string str) {
    return strcpy(malloc(strlen(str) + 1), str);
}

string string_trim(string str) {
    while ((*str == ' ') || (*str == '\t')) str++;

    size_t len = strlen(str);

    while (len && (*(str + len - 1) == ' ' || *(str + len - 1) == '\t')) len--;

    string trimmed = malloc(len + 1);
    memcpy(trimmed, str, len);
    trimmed[len] = 0;

    return trimmed;
}

string * string_split(string str, const char *delims) {
    if (!str) return NULL;

    string *result = NULL;
    size_t len, count; 

    str += strspn(str, delims);

    for (count = 0; *str; count++) {
        len = strcspn(str, delims);

        result = realloc(result, sizeof(string*) * (count + 1));
        result[count] = malloc(len + 1);
        memcpy(result[count], str, len);
        result[count][len] = 0;

        str += len;
        str += strspn(str, delims);
    }
    result = realloc(result, sizeof(string*) * (count + 1));
    result[count] = NULL;

    return result;
}

size_t string_arrsize(string* array) {
    size_t size = 0;
    while (*array++) size++;
    return size;
}

string string_replace(string src, const string a, const string b) {
    //
}

void string_concat(string *str, unsigned *len, ...) {
    //
}


