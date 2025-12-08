/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjun-xi <gjun-xi@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 20:55:29 by gjun-xi           #+#    #+#             */
/*   Updated: 2025/12/07 21:03:31 by gjun-xi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_1;
	size_t	len_2;
	char	*p;

	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	p = malloc((len_1 + len_2 + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, len_1 + 1);
	ft_strlcpy(p + len_1, s2, len_2 + 1);
	return (p);
}
