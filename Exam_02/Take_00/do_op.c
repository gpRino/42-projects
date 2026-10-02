/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 13:15:21 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/18 13:15:21 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_putnbr(int n)
{
    char c;

    if (n < 0)
    {
        write(1, "-", 1);
        ft_putnbr(n * -1);
        return;
    }
    if (n >= 10)
        ft_putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

void do_op(char *a, char op, char *b)
{
    int res = 0;
    int num_a = atoi(a);
    int num_b = atoi(b);

    if (op == '+')
        res = num_a + num_b;
    else if (op == '-')
        res = num_a - num_b;
    else if (op == '*')
        res = num_a * num_b;
    else if (op == '/')
        res = num_a / num_b;
    else if (op == '%')
        res = num_a % num_b;
    ft_putnbr(res);
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        do_op(argv[1], argv[2][0], argv[3]);
    }
    write(1, "\n", 1);
    return (0);
}