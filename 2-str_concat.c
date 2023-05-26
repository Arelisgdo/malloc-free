#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: Pointer to a newly allocated space in memory containing the concatenated string.
 *         NULL if the allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
    unsigned int len1 = 0, len2 = 0, i, j;
    char *concatenated;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

    if (concatenated == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];
    for (j = 0; j < len2; j++)
        concatenated[i + j] = s2[j];

    concatenated[i + j] = '\0';

    return (concatenated);
}


