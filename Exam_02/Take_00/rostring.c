/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:05:46 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/15 09:05:46 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i = 0;
    char *c;
    int space = 0;
    int fw = 0;
    int j = 0;

    // check di spazi e di malloc
    while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
        i++;
    while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
    {
        fw++;
        i++;
    }
    c = malloc(fw + 1);
    if (c == NULL)
        return (0);
    // malloc avvenuto, check degli argomenti
    if (argc > 1)
    {
        i = i - fw;
        while (argv[1][i] != '\0' && fw != 0)
        {
            c[j] = argv[1][i];
            i++;
            j++;
            fw--;
        }
        c[j] = '\0';
        // controllo spazi tra le parole
        while (argv[1][i] != '\0')
        {
            if ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
            {
                while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
                {
                    write(1, " ", 1);
                    space = 1;
                    i++;
                    while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0' && space == 1)
                    {
                        i++;
                        if (argv[1][i] != ' ' && argv[1][i] != '\t')
                            space = 0;
                    }
                }
            }
            write(1, &argv[1][i], 1);
            space = 0;
            i++;
        }
        if (argv[1][i] == '\0')
            write(1, " ", 1);
        j = 0;
        while (c[j] != '\0')
        {
            write(1, &c[j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}