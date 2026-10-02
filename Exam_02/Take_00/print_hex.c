/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:51:15 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/07 13:51:15 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int i)
{
    char c;

    if (i >= 16)
        ft_putnbr(i / 16);
    if (i % 16 >= 10 && i % 16 <= 15)
        c = (i % 16 - 10) + 'a';
    else
        c = i % 16 + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i = 0;
    int c = 0;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][i] != '\0')
    {
        c = c * 10 + (argv[1][i] - '0');
        i++;
    }
    ft_putnbr(c);
    write(1, "\n", 1);
    return (0);
}