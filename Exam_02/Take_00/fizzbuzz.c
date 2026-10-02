/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 00:30:58 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/17 00:30:58 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void put_num(int n)
{
    char *dec;

    dec = "0123456789";
    if (n > 9)
        put_num(n / 10);
    write(1, &dec[n % 10], 1);
}

void fizzbuzz(int len)
{
    int i;

    i = 1;
    while (i < len)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            put_num(i);
        i++;
        write(1, "\n", 1);
    }
}

int main()
{
    fizzbuzz(101);
    return (0);
}