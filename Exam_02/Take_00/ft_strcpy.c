/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 12:02:09 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/18 12:02:09 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    while (s1[i] != '\0' && s2[j] != '\0')
    {
        s2[j] = s1[i];
        i++;
        j++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    (void)argc;
    ft_strcpy(argv[1], argv[2]);
    return (0);
}