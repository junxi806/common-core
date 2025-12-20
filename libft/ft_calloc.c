/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjun-xi <gjun-xi@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 19:47:38 by gjun-xi           #+#    #+#             */
/*   Updated: 2025/12/21 03:46:39 by gjun-xi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	count;

	count = nmemb * size;
	if (nmemb != 0 && count / nmemb != size)
		return (NULL);
	p = malloc(count);
	if (!p)
		return (NULL);
	ft_memset(p, '\0', count);
	return (p);
}
