/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 08:57:11 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/03 08:57:11 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int i)
{
    char c;

    if (i >= 10)
        ft_putnbr(i / 10);
    c = i % 10 + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    (void)argv;
    int i = 0;

    if (argc != 1)
    {
        i = argc - 1;
        ft_putnbr(i);
        write(1, "\n", 1);
        return (0);
    }
    write(1, "0", 1);
    write(1, "\n", 1);
    return (0);
}