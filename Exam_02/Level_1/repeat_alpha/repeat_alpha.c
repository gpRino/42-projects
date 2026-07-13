/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2026/07/13 13:41:23 by gleccia           #+#    #+#             */
/*   Updated: 2026/07/13 13:41:23 by gleccia          ###   ########.fr       */
=======
/*   Created: 2026/07/12 10:25:59 by gleccia           #+#    #+#             */
/*   Updated: 2026/07/12 10:53:51 by gleccia          ###   ########.fr       */
>>>>>>> 7b072c26025f4a447c2f4ff9a20d0fabdbcd2bc8
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

<<<<<<< HEAD
void ft_putchar(char c)
{
    write(1, &c, 1);
=======
void ft_putchar(char c, int i)
{
    while (i > 0)
    {
        write(1, &c, 1);
        i--;
    }

>>>>>>> 7b072c26025f4a447c2f4ff9a20d0fabdbcd2bc8
}

void repeat_alpha(char *str)
{
    int i;
<<<<<<< HEAD
    int j;

    j = 0;
    i = 0;
    while (str[i] != '\0')
    {
       if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
       {
        if (str[i] >= 'a' && str[i] <= 'z')
            j = str[i] - 'a';
        else
            j = str[i] - 'A';

        while (j >= 0)
        {
            ft_putchar(str[i]);
            j--;
        }
       }
       i++;
=======

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            ft_putchar(str[i], str[i] + 1 - 'A');
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            ft_putchar(str[i], str[i] + 1 - 'a');
        }
        else
        {
            write(1, &str[i], 1);
        }
        i++;
>>>>>>> 7b072c26025f4a447c2f4ff9a20d0fabdbcd2bc8
    }
}

int main (int argc, char **argv)
{
<<<<<<< HEAD
    if (argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    repeat_alpha(argv[1]);
    return(0);
=======
    if (argc == 2)
    {
        repeat_alpha(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
>>>>>>> 7b072c26025f4a447c2f4ff9a20d0fabdbcd2bc8
}