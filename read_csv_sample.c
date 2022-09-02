#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DATA 9

struct data{
    char s[MAX_DATA][1024];
};

void remove_spaces(char* s) {
    const char* d = s;
    do {
        while (*d == ' ') {
            ++d;
        }
    } while (*s++ = *d++);
}

void getfield(char* line, struct data *d, int end_idx)
{
    int idx = 0;

    char *token = strtok(line, ",");

   do
   {
      //printf("token: %s\n", token);
      strcpy(d->s[idx++], token);
   }
   while ( idx != end_idx && (token = strtok(NULL, ",")));
   
}

int main()
{
    FILE* stream = fopen("dowstocks.csv", "r");

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        remove_spaces(line);
        
        struct data d;

        char *tmp = strdup(line);
        getfield(tmp, &d, MAX_DATA);
        
        printf("[%s][%s][%s][%s][%s][%s][%s][%s][%s] \n", d.s[0], d.s[1], d.s[2],d.s[3], d.s[4], d.s[5],d.s[6], d.s[7], d.s[8]);
        
        free(tmp);
    }
}
