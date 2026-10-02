/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 09:39:03 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/14 09:39:03 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char temp;
    while (str[i] != '\0')
        i++;
    i--;
    while (j < i)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i--;
        j++;
    }
    return(str);
}

int main()
{
    char s[] = "oaic";
    ft_strrev(s);
    return(0);
}