/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleccia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 10:42:00 by gleccia           #+#    #+#             */
/*   Updated: 2026/09/03 10:42:00 by gleccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int main(void)
{
    t_list node3;
    t_list node2;
    t_list node1;

    node3.data = NULL;
    node3.next = NULL;

    node2.data = NULL;
    node2.next = &node3;

    node1.data = NULL;
    node1.next = &node2;

    printf("%d\n", ft_list_size(&node1));
    return (0);
}