#include <stdio.h>

#include "word.h"

int read_char(void)
{
    int ch = getchar();

    if (ch == '\n' || ch == '\t') {
         return ' ';
    }
    return ch;
}

void read_word(char* out_word, int len) {
    int ch = 0;
    int pos = 0;

    while ((ch = read_char()) == ' ') {
    }

    while (ch != ' ' && ch != EOF) {
        if (pos < len) {
            out_word[pos++] = ch;
        }
        ch = read_char();
    }
    out_word[pos] = '\0';
}