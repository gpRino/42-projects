/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 10:04:25 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/14 10:04:25 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int c = 0;
    int sign = 0;
    int val = 0;

    if (str[i] == '-')
    {
        sign = 1;
        i++;
    }
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
            val = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            val = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            val = str[i] - 'A' + 10;
        if (val >= str_base)
            return (0);
        c = c * str_base + val;
        i++;
    }
    if (sign == 1)
        c = c * -1;

    return (c);
}
int main()
{
    ft_atoi_base("-101", 2);
    return (0);
}