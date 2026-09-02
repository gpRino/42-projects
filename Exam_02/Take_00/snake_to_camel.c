/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 11:26:31 by gleccia           #+#    #+#             */
/*   Updated: 2026/08/10 11:26:31 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    int  i;
    bool caps;

    if (argc == 2)
    {
        i = 0;
        caps = false;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == '_')
            {
                caps = true;
            }
            else
            {
                if (caps && (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
                {
                    char c = argv[1][i] - 32;
                    write(1, &c, 1);
                }
                else
                {
                    write(1, &argv[1][i], 1);
                }
                caps = false;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}