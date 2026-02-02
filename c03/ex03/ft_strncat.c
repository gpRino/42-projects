//:Stdheader
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int n)
{
    char *ptr = dest;

    while (*ptr)
        ptr++;

    while (*src && n > 0)
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }
    *ptr = '\0';

    return (dest);
}
int	main(void)
{
	char buffer[50] = "Hello ";
    char add[] = "World!!!";

    printf("Before: \"%s\"\n", buffer);
    ft_strncat(buffer, add, 5);
    printf("After : \"%s\"\n", buffer);

    return (0);
}
