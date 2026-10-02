/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 14:18:32 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/08 14:18:32 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    char c;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                c = 'z' - (argv[1][i] - 'a');
                write(1, &c, 1);
                i++;
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                c = 'Z' - (argv[1][i] - 'A');
                write(1, &c, 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}