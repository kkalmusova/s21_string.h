#include "./s21_string.h"

char *s21_strcat(char *dest, const char *src) {
    char * res = dest;
    int i, j;
    for (i = 0; dest[i] != '\0'; i++) {}
    for (j = 0; src[j] != '\0'; j++) {
        dest[i + j] = src[j];
    }
    dest[i+j] = '\0';
    return res;
}
