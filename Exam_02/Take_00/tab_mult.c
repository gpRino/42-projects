/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 09:12:58 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/04 09:12:58 by gleccia          ###   ########.fr       */
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
    int i = 0; // Indice ARGV
    int m = 1; // Numero 1-9 scorrimento
    int r = 0; // Risultato finale
    int c = 0; // Valore inserito

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
    while (m <= 9)
    {
        ft_putnbr(m);
        write(1, " x ", 3);
        ft_putnbr(c);
        write(1, " = ", 3);
        r = c * m;
        ft_putnbr(r);
        write(1, "\n", 1);
        m++;
    }
    return (0);
}