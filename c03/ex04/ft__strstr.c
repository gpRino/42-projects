//:Stdheader

#include <stdio.h>

char	*ft_strstr(char	*str, char	*to_find)
{
	int i;
	int j;
	i = 0;

	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
int main(int argc, char *argv[])
{
    if (argc != 3)
        return 1;

    char *res = ft_strstr(argv[1], argv[2]);

    if (res)
        printf("Trovato: %s\n", res);
    else
        printf("Non trovato\n");

    return 0;
}
