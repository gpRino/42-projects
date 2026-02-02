//:Stdheader
#include <stdio.h>
char	*ft_strcat(char	*dest, char	*src)
{
	char *ptr = dest;
	
	while (*ptr)
	ptr++;
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
int main(void)
{
    char buffer[50] = "Hello ";
    char add[] = "World!";

    printf("Before: \"%s\"\n", buffer);
    ft_strcat(buffer, add);
    printf("After : \"%s\"\n", buffer);

    return (0);
}

