/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:54:54 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/09 11:54:54 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int c = 0;
    int comp = 0;

    while (argv[1][comp] != '\0')
        comp++;

    if (argc == 3)
    {
        while (argv[1][i] != '\0')
        {
            j = 0;
            while (argv[2][j] != '\0')
            {
                if (argv[1][i] == argv[2][j])
                {
                    c++;
                    if (c == comp)
                    {
                        write(1, "1", 1);
                        write(1, "\n", 1);
                        return (0);
                    }
                }
                j++;
            }
            i++;
        }
    }
    write(1, "0", 1);
    write(1, "\n", 1);
    return (0);
}