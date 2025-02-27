/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciprian <aciprian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:39:25 by aciprian          #+#    #+#             */
/*   Updated: 2025/02/25 12:07:51 by aciprian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    if (str == NULL || str[0] == '\0')
    {
        return (1);
    }

    while (str[i] != '\0')
    {
        if (str[i] < 'A' || str[i] > 'Z')
        {
            return (0);
        }
        i++;
    }
    return (1);
}
