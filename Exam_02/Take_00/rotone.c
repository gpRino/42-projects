/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 12:28:24 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/18 12:28:24 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_charp(char c)
{

    if (c == 'Z')
        write(1, "A", 1);

    else if (c == 'z')
        write(1, "a", 1);

    else
    {
        c += 1;
        write(1, &c, 1);
    }
}

void rotone(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            ft_charp(str[i]);
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rotone(argv[1]);
    write(1, "\n", 1);
    return (0);
}