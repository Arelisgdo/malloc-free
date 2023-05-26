
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
    if (str == NULL)
        return NULL;

    size_t len = strlen(str);
    char *duplicate = malloc(len + 1);
    if (duplicate == NULL)
        return NULL;

    memcpy(duplicate, str, len + 1);
    return duplicate;
}


