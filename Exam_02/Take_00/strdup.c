#include <stdlib.h>
#include <stddef.h>

char *strdup(const char *src)
{
    int i = 0;
    int j = 0;

    while (src[i] != '\0')
        i++;

    char *dest = malloc(i + 1);
    if (dest == NULL)
        return (NULL);

    while (src[j] != '\0')
    {
        dest[j] = src[j];
        j++;
    }
    if (src[j] == '\0')
    {
        dest[j] = src[j];
    }
    return (dest);
}

int main()
{
    char *src = "";
    char *dest = strdup(src);
    free(dest);
    return (0);
}