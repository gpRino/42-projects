//:Stdheader

#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if (!str || !to_find)
        return (NULL);

    if (to_find[0] == '\0')
        return (str);

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] == to_find[j] && str[i + j] != '\0')
        {
            j++;
            if (to_find[j] == '\0')
                return (&str[i]);
        }
        i++;
    }
    return (NULL);
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Errore");
        return (1);
    }

    char *res = ft_strstr(argv[1], argv[2]);

    if (res)
        printf("%s\n", res);
    else
        printf("Non trovato.\n");

    return (0);
}
