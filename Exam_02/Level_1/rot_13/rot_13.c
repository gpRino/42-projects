/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 14:20:40 by gleccia           #+#    #+#             */
/*   Updated: 2026/07/13 14:20:40 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    char c;

    i = 0;
    if (argc != 2)
    {
        write (1, "\n", 1);
        return (0);
    }
    while (argv[1][i] != '\0')
    {
        if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') || (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
        {
            c = argv[1][i] + 13;
            write (1, &c, 1);
            i ++;
        }
        else if ((argv[1][i] >= 'n' && argv[1][i] <= 'z') || (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
        {
            c = argv[1][i] - 13;
            write (1, &c, 1);
            i ++;
        }
        else
        {
            write (1, &argv[1][i], 1);
            i ++;
        }
    }
    write (1, "\n", 1);
    return (0);
}