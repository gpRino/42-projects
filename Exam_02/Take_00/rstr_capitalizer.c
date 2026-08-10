/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 15:21:46 by gleccia           #+#    #+#             */
/*   Updated: 2026/08/10 15:21:46 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_alpha(char c)
{
    return((c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z'));
}

int is_sep(char c)
{
    return(c == '\0' || c == ' ' || c == '\t');
}

void capitalize(char *str)
{
    int i = 0;
    char c;

    while(str[i])
    {
        c = str[i];
        if(c >= 'A' && c <= 'Z')
        {
            c = c + 32;
        }
        if(is_alpha(c) && is_sep(str[i+1]))
            c = c - 32;
        write(1, &c, 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = 1;
    while (i < argc)
    {
        capitalize(argv[i]);
        write(1, "\n", 1);
        i++;
    }
    if (argc == 1)
        write(1, "\n", 1);
    return(0);
}
