//:Stdheader
#include <unistd.h>
int	ft_putstr(char	*str)
{
	write (1, str, 42);
	return (0);
}
int main()
{
	char str[] = "My lawyer sayd don't do it";
	ft_putstr(str);
	write (1, "\n", 1);
	return (0);
}
