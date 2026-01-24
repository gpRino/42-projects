/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:15:30 by gleccia           #+#    #+#             */
/*   Updated: 2026/01/23 20:27:00 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
   char	*ft_strupcase(char	*str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
//		if (!(str <= 'A' && str >= 'Z') && (str <= 'a' && str >= 'z'))
//			return (0);
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return(str);
}
int main ()
{
	char str[] = "EminfleX";
	char *w = ft_strupcase(str);

	write (1, w, 8);
	write (1, "\n", 1);
	return (0);
}
