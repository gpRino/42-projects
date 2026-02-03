/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:18:54 by gleccia           #+#    #+#             */
/*   Updated: 2026/02/03 15:18:55 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		ptr++;
	while (*src && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
/*int	main(void)
{
	char buffer[50] = "Hello ";
    char add[] = "World!!!";

    printf("Before: \"%s\"\n", buffer);
    ft_strncat(buffer, add, 5);
    printf("After : \"%s\"\n", buffer);

    return (0);
}*/
