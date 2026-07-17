/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 14:45:56 by gleccia           #+#    #+#             */
/*   Updated: 2026/07/17 14:45:56 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include   <stdlib.h>

size_t ft_strlen(const char *src)
{
    size_t len;

    len = 0;
    while (src[len] != '\0')
        len++;
    return (len);
}

char    *ft_strdup(char *src)
{
    char *dest;
    size_t i;
    size_t len;

    len = ft_strlen(src);
    dest = (char*)malloc((len + 1) * sizeof(char));
    if (dest == NULL)
        return (NULL);
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
