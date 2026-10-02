/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 10:45:38 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/04 10:45:38 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int swtch = 0;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][i] == ' ' || argv[1][i] == '\t')
        i++;
    while (argv[1][i] != '\0')
    {
        if (argv[1][i] == ' ' || argv[1][i] == '\t')
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            if (argv[1][i] != '\0')
                swtch = 1;
        }
        if (swtch == 1)
        {
            i--;
            write(1, "   ", 3);
            i++;
            swtch = 0;
        }
        if (argv[1][i] == '\0')
        {
            write(1, "\n", 1);
            return (0);
        }
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}