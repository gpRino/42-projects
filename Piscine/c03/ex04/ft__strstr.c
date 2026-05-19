/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__strstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:19:26 by gleccia           #+#    #+#             */
/*   Updated: 2026/02/03 15:19:32 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!(str || to_find))
		return (NULL);
	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
		j = 0;
	while (str[i + j] == to_find[j] && str[i + j] != '\0')
	{
		j++;
		if (to_find[j] == '\0')
			return (&str[i]);
	}
	i++;
	return (NULL);
}
/*int main(void)
{
	char str[] = "elefante tandem psichico da guerra";
	char 2str[] = "tandem";
	ft_strstr(str, 2str);
	return (0);
}*/
