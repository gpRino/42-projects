/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:18:02 by gleccia           #+#    #+#             */
/*   Updated: 2026/07/13 15:18:02 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    char c;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    i = 0;

    while (argv[1][i])
    {
        if (argv [1][i] >= 'a' && argv[1][i] <= 'z')
        {
            c = argv[1][i] - 32;
            write(1, &c, 1);
        }
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            c = argv[1][i] + 32;
            write(1, &c, 1);
        }
        else
            write(1, &argv[1][i], 1);
        i++;
    }
    return (0);
}