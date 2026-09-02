/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:49:16 by gleccia           #+#    #+#             */
/*   Updated: 2026/08/24 15:49:16 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int *tab, unsigned int len)
{
    int i;
    int temp;

    if (len == 0)
    {
        return (0);
    }
    temp = tab[0];
    i = 1;
    while (i < len)
    {
        if (tab[i] > temp)
        {
            temp = tab[i];
        }
        i++;
    }
    return (temp);
}
/*
#include <stdio.h>

int	main(void)
{
    int	tab[] = {2, 0, 1, 4, 4, 763, 2937};

    printf("%i\n", max(tab, 7));
    return (0);
}*/