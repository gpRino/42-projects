/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:17:34 by gleccia           #+#    #+#             */
/*   Updated: 2026/02/03 15:17:41 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char	*dest, char	*src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		ptr++;
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
/*int main(void)
{
    char buffer[50] = "Hello ";
    char add[] = "World!";

    printf("Before: \"%s\"\n", buffer);
    ft_strcat(buffer, add);
    printf("After : \"%s\"\n", buffer);
    return (0);
}*/
