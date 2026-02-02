/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:52:58 by gleccia           #+#    #+#             */
/*   Updated: 2026/02/02 15:48:28 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	s;
	int	a;

	s = 1;
	a = nb;
	if (nb < 0)
		return (0);
	while (a != 1)
	{
		nb *= s;
		s++;
		a--;
	}
	if (a == 1)
		return (nb);
	return (nb);
}

/*int main ()
{
	int t = 5;
	ft_iterative_factorial(t);
	return(0);
}*/
