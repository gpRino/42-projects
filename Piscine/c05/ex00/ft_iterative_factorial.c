/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiument <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:01:54 by ggiument          #+#    #+#             */
/*   Updated: 2026/02/03 19:02:03 by ggiument         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	c;

	c = nb;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		while (c > 1)
		{
			c = c - 1;
			nb = nb * c;
		}
		return (nb);
	}
}
/*int main ()
{
	int t = 5;
	ft_iterative_factorial(t);
	return(0);
}*/
