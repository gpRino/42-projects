/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:20:56 by gleccia           #+#    #+#             */
/*   Updated: 2026/07/14 12:20:56 by gleccia          ###   ########.fr       */
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
        if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            i--;
            write(1, "_", 1);
            i++;
            c = argv[1][i] + 32;
            write(1, &c, 1);
            i++;
        }
        else
        {
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    return (0);
}