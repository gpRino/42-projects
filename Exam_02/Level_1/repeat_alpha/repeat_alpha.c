/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 13:41:23 by gleccia           #+#    #+#             */
/*   Updated: 2026/07/13 13:41:23 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void repeat_alpha(char *str)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (str[i] != '\0')
    {
       if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
       {
        if (str[i] >= 'a' && str[i] <= 'z')
            j = str[i] - 'a';
        else
            j = str[i] - 'A';

        while (j >= 0)
        {
            ft_putchar(str[i]);
            j--;
        }
       }
       i++;
    }
}

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    repeat_alpha(argv[1]);
    return(0);
}