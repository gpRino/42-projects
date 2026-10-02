/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 12:48:08 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/18 12:48:08 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void downer(char c)
{
    c += 32;
    write(1, &c, 1);
}

void upper(char c)
{
    c -= 32;
    write(1, &c, 1);
}

void ulstr(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            downer(s[i]);
        else if (s[i] >= 'a' && s[i] <= 'z')
            upper(s[i]);
        else
            write(1, &s[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        ulstr(argv[1]);
    write(1, "\n", 1);
    return (0);
}