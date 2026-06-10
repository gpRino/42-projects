/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 17:02:16 by gleccia           #+#    #+#             */
/*   Updated: 2026/05/26 18:57:17 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t count)
{
        unsigned char   *d;
        const unsigned char     *s;

        if (dest == src)
                return (dest);

        d = (unsigned char *)dest;
        s = (const unsigned char *)src;
        
        if (d > s)
        {
                while (count > 0)
                {
                        count--;
                        d[count] = s[count]; 
                }
        }

        else
        {
                size_t i = 0;
                while (i < count)
                {
                        d[i] = s[i];
                        i++;
                }
        }
        return (dest);
}

