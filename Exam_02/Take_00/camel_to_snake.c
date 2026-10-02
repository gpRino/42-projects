/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 13:06:43 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/18 13:06:43 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void lower(char c)
{
    c += 32;
    write(1, &c, 1);
}

void swp(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            write(1, "_", 1);
            lower(str[i]);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        swp(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}