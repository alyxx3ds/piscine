/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleciprian <aciprian@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:32:45 by aleciprian        #+#    #+#             */
/*   Updated: 2025/02/27 21:32:45 by aleciprian       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }

    if (i == n)
    {
        return (0);
    }

    return (s1[i] - s2[i]);
}
