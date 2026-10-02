/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:28:51 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/16 12:28:51 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int temp = 0;
    int j = 1;

    while (i != (int)size)
    {
        j = i + 1;
        while (j < (int)size)
        {
            if (tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int array[] = {57, 0, 83, 1, 12 ,0, 16, 0};
    int size = sizeof(array) / sizeof(array[0]);
    int i = 0;

    sort_int_tab(array, size);
    while (i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
    return (0);
}
// 2 5 8 1 NULL
// temp 5
// i 0
// j 0