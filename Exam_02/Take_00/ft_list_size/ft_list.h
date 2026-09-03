/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 10:42:03 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/03 10:42:03 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct s_list
{
    struct s_list *next;
    void *data;
} t_list;

int ft_list_size(t_list *begin_list);

#endif