/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 12:00:16 by gleccia           #+#    #+#             */
/*   Updated: 2026/08/11 12:00:16 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
  t_list *current;
  t_list *prev;
  t_list *tmp;

  prev = 0;
  current = *begin_list;
  while (current) {
    if (cmp(current->data, data_ref) == 0) {
      tmp = current->next;
      if (prev)
        prev->next = tmp;
      else
        *begin_list = tmp;
      free(current);
      current = tmp;
    } else {
      prev = current;
      current = current->next;
    }
  }
}