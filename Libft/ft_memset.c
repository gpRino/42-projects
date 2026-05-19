/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 19:02:24 by gleccia           #+#    #+#             */
/*   Updated: 2026/05/19 19:22:24 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *ptr, int value, size_t num)
{
    unsigned char *p = (unsigned char *)ptr;

    unsigned char v = (unsigned char)value;

    for (size_t i = 0; i < num; i++) {
        p[i] = v;
    }

    return ptr; 
}

