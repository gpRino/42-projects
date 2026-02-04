//:Stdheader

#include <unistd.h>

char	ft_putchar(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, str, 1);
		str++;
	}
	return (0);
}
int main(void)
{
//	char str[21];
	char str[21] = "ft_print_program_name";
	ft_putchar(str);
	write (1, "\n", 1);
	return (0);
}
