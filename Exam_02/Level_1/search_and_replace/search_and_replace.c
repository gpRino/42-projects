/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 14:57:59 by gleccia           #+#    #+#             */
/*   Updated: 2026/07/13 14:57:59 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    if (argc != 4)
    {
        write (1, "\n", 1);
        return (0);
    }

    i = 0;
    while (argv[1][i])
    {
        if (argv[1][i] == argv[2][0])
        {
            write (1, &argv[3][0], 1);
        }
        else
        {
            write (1, &argv[1][i], 1);
        }
        i++;
    }
    write (1, "\n", 1);
    return (0);
}