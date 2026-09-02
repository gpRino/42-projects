/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 12:29:00 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/01 12:29:00 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_if_new(char c, int *visti)
{
    if (visti[(unsigned char)c] == 0)
    {
        write(1, &c, 1);
        visti[(unsigned char)c] = 1;
    }
}

void ft_union(char *str, char *comp)
{
    int visti[256] = {0};
    int i = 0;
    int j = 0;

    while (str[i] != '\0')
    {
        ft_print_if_new(str[i], visti);
        i++;
    }
    while (comp[j] != '\0')
    {
        ft_print_if_new(comp[j], visti);
        j++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}