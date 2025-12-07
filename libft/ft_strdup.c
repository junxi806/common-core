/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjun-xi <gjun-xi@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 19:46:13 by gjun-xi           #+#    #+#             */
/*   Updated: 2025/12/07 19:55:50 by gjun-xi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*p;

	len = ft_strlen(s);
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s, len + 1);
	return (p);
}
