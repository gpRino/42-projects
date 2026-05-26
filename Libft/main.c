#include <stdio.h>
#include "libft.h"

int main(void)
{
	char str[] = "la risposta è Quarantadue";

	printf("--- TEST FT_MEMSET ---\n");
	printf("Stringa originale: %s\n", str);
	ft_memset(str, 'X', 14);

	printf("Stringa modificata: %s\n", str);
	printf("----------------------\n");

	return (0);
}
