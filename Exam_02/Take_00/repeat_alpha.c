/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 14:09:24 by gleccia           #+#    #+#             */
/*   Updated: 2026/08/09 14:09:24 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int main(int argc, char **argv)
{
	int i = 0;
	int rply = 0;

	if (argc != 2)
	{
	    write(1, "\n", 1);
		return(0);
	}

	while(argv[1][i] != '\0')
	{
		if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			rply = argv[1][i] + 1 - 'A';
			while(rply != 0)
			{
				write(1, &argv[1][i], 1);
				rply--;
			}
		}
		else if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			rply = argv[1][i] + 1 - 'a';
			while(rply != 0)
			{
				write(1, &argv[1][i], 1);
				rply--;
			}
		}
		else
		{
		    write(1, &argv[1][i], 1);
		}
		i++;
	}
	return(0);
}