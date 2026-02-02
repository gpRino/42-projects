//:Stdheader
#include <stdio.h>

int	ft_atoi(char	*str)
{
	short parity;
	int number;

	parity = number = 0;

	while (*str  == '\t' || *str == '\n' ||
		*str == '\v' ||	*str == '\f' ||
		*str == '\r' || *str == ' ')
		++str;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		++str;
	}
	if (!(parity % 2))
		return (number);
	return (-number);
}
int main()
{
	char	*s = "  ---+--+1234ab567";
	printf("%d\n", ft_atoi(s));
}
