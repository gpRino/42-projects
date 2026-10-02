/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:03:48 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/22 14:03:48 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char *ft_strdup(char *src)
{
    size_t len = 0;
    char *dest;
    int i = 0;
  //  int j = 0;

    while (src[len] != '\0')
        len++;

    dest = (char *)malloc((len + 1) * sizeof(char));
    if (dest == NULL)
        return (NULL);

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    while (*dest != '\0')
    {
        write(1, dest, 1);
        dest++;
    }
    return (dest);
}

int main(int argc, char **argv)
{
    (void)argc;
    ft_strdup(argv[1]);
    return (0);
}