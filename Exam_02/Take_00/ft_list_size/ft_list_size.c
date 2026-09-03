/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 10:41:57 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/03 10:41:57 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int count;
    t_list *current;

    count = 0;
    current = begin_list;

    while (current != NULL)
    {
        current = current->next;
        count ++;
    }
    return(count);
}