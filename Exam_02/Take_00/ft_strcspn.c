/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:34:29 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/07 13:34:29 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j;

    while (s[i] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}