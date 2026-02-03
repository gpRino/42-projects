/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:29:04 by gleccia           #+#    #+#             */
/*   Updated: 2026/02/03 20:42:17 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else
	{
		while (i <= 46340 && (i * i) < nb)
			i++;
		if ((i * i) == nb)
			return (i);
		else
			return (0);
	}
}

/*int main(void)
{
    int test1 = 81;
    printf("%d\n", ft_sqrt(test1));
    return (0);
}*/
