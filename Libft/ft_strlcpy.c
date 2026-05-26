/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 19:36:06 by gleccia           #+#    #+#             */
/*   Updated: 2026/05/26 20:46:09 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);

	if (!size)
	{
		return(src_len);
	}

	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}

	dst[i] = '\0';
	return (src_len);
}

int	main()
{
	char str1 [6]= "Hello ";
	char str2[6] = "";
//	char *str3 = "Hello ";
//	char *str4 = "World ";


	int i = ft_strlcpy(str2, str1, 4);
//	int j = strlcpy(str3, str4, 5);
	printf("len = %d || dst = %s\n", i, str2);
//	printf("len = %d || dst = %s", j, str3);
}
