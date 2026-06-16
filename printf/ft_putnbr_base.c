/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 16:35:55 by gleccia           #+#    #+#             */
/*   Updated: 2026/06/16 17:20:03 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define BASE_10 "0123456789"
#define BASE_16_LOW "0123456789abcdef"
#define BASE_16_UP "0123456789ABCDEF"

void	ft_putnbr_base(int nbr, char *base, int len)
{
	long	n;

	n = nbr;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= len)
		ft_putnbr_base (n/len, base, len);
	write(1, &base[n % len],1);
}

/*int	main()
{
	ft_putnbr_base(-2147483648, BASE_10, 10);
}*/
