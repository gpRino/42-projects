/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2026/07/13 14:10:28 by gleccia           #+#    #+#             */
/*   Updated: 2026/07/13 14:10:28 by gleccia          ###   ########.fr       */
=======
/*   Created: 2026/07/12 10:57:29 by gleccia           #+#    #+#             */
/*   Updated: 2026/07/12 11:04:32 by gleccia          ###   ########.fr       */
>>>>>>> 7b072c26025f4a447c2f4ff9a20d0fabdbcd2bc8
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

<<<<<<< HEAD
int main(int argc, char **argv)
=======
int ft_strlen(char *str)
>>>>>>> 7b072c26025f4a447c2f4ff9a20d0fabdbcd2bc8
{
    int i;

    i = 0;
<<<<<<< HEAD
    if (argc != 2)
    {
        write (1, "\n", 1);
        return (0);
    }
    while (argv[1][i] != '\0')
    {
        i++;
    }
    i--;
    while (i >= 0)
    {
        write (1, &argv[1][i], 1);
        i--;
    }
=======
    while (str[i] != '\0')
        i++;
    return (i);
}

void rev_print(char *str)
{
    int i;

    i = ft_strlen(str) - 1;
    while (i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
}

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        rev_print(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
>>>>>>> 7b072c26025f4a447c2f4ff9a20d0fabdbcd2bc8
}