/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 22:06:56 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/23 22:06:56 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_sep(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0')
    {
        while (is_sep(str[i]))
            i++;
        if (str[i] != '\0')
        {
            count++;
            while (str[i] != '\0' && !is_sep(str[i]))
                i++;
        }
    }
    return (count);
}

int word_len(char *str, int i)
{
    int len = 0;

    while (str[i] != '\0' && !is_sep(str[i]))
    {
        len++;
        i++;
    }
    return (len);
}

char *copy_word(char *str, int i, int len)
{
    char *word;
    int j = 0;

    word = malloc((len + 1) * sizeof(char));
    if (word == NULL)
        return (NULL);
    while (j < len)
    {
        word[j] = str[i + j];
        j++;
    }
    word[j] = '\0';
    return (word);
}

char **ft_split(char *str)
{
    char **result;
    int i;
    int j;
    int len;
    int total_words;

    total_words = count_words(str);
    result = malloc((total_words + 1) * sizeof(char *));
    if (result == NULL)
        return (NULL);
    i = 0;
    j = 0;
    while (j < total_words)
    {
        while (is_sep(str[i]))
            i++;
        len = word_len(str, i);
        result[j] = copy_word(str, i, len);
        i = i + len;
        j++;
    }
    result[j] = NULL;
    return (result);
}

int main(int argc, char **argv)
{
    (void)argc;
    ft_split(argv[1]);
    return (0);
}