/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:42:17 by gleccia           #+#    #+#             */
/*   Updated: 2026/07/14 12:42:17 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int do_op(int a, int b, char op)
{
	int result;

	result = 0;
	if (op == '+')
		result = a + b;
	else if (op == '-')
		result = a - b;
	else if (op == '*')
		result = a * b;
	else if (op == '/')
		result = a / b;
	else if (op == '%')
		result = a % b;
	return (result);
}

int main(int argc, char **argv)
{
	if (argc == 4)
		printf("%i", do_op(atoi(argv[1]), argv[2][0], atoi(argv[3])));
	printf("\n");
	return(0);
}