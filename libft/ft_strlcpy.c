/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjun-xi <gjun-xi@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 19:53:08 by gjun-xi           #+#    #+#             */
/*   Updated: 2025/12/20 19:53:10 by gjun-xi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (--size && *src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (len);
}
