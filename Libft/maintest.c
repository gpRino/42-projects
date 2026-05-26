#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
//	printf("%d", ft_isascii('z'));
//	printf("%d", isascii('z'));
//	printf("%d", ft_isascii(128));
//	printf("%d", isalpha('Y'));
//	printf("%d", isdigit('7'));
//	printf("%d", ft_strlen("going back to 505"));
	char str[] = "ABCDEFG";

	printf("Prima: %s\n", str);
	ft_memmove(str + 2, str, 3);

	printf("Dopo:  %s\n", str);
	return (0);
}
