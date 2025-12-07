/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjun-xi <gjun-xi@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:45:01 by gjun-xi           #+#    #+#             */
/*   Updated: 2025/12/07 19:37:27 by gjun-xi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	int		count;

	count = nmemb * size;
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_memset(p, '\0', count);
	return (p);
}
