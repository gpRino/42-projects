/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:27:57 by gleccia           #+#    #+#             */
/*   Updated: 2026/02/02 17:24:40 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	r;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		r = r * nb;
		power--;
	}
	return (r);
}

/*int	main(void)
{
	int b = 5;
	int p = 2;
	ft_iterative_power(b, p);
	return (0);
}*/
